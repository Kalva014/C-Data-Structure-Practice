#pragma once
#include "linkedlist.h"

int LinkedList::size() {
    if(head == nullptr) {
        return 0;
    }

    Node* temp = head;
    int cnt = 1;

    while(temp->next != nullptr) {
        temp = temp->next;
        ++cnt;
    }
    
    return cnt;
}

bool LinkedList::empty() {
    if(head == nullptr && tail == nullptr) {
        return true;
    }
    return false;
}

char LinkedList::value_at(int index) {
    Node* temp = head;

    while(index > 0) {
        temp = temp->next;
        --index;
    }

    return temp->data;
}

void LinkedList::push_front(char value){
    if(empty() == true){
        head = new Node();
        head->data = value;
        head->next = nullptr;
        tail = head;
    }

    Node* temp = new Node();
    temp->data = value;
    temp->next = head; 
    head = temp;
    // Not sure if i have to delete temp here
}

char LinkedList::pop_front() {
    if(empty() == true) {
        return 'Z';
    }

    Node* temp = head;
    head = head->next;
    delete temp;
} 

void LinkedList::push_back(char value) {
    if(empty() == true) {
       push_front(value);
    }
    
    Node* temp = new Node();
    temp->data = value;
    temp->next = nullptr;
    tail->next = temp;
    tail = temp;
}

char LinkedList::pop_back() {
    Node* temp = head;

    while(temp->next != tail) {
        temp = temp->next;
    }

    Node* oldTail = temp->next;
    temp->next = nullptr;
    tail = temp;
    delete temp;

    return oldTail->data;
}

char LinkedList::front() {
    if(empty() == true) {
        return 'x';
    }

    return head->data;
}

char LinkedList::back() {
    if(empty() == true) {
        return 'x';
    }
    
    return tail->data;
}

void LinkedList::insert(int index, char value) {
    if(empty() == true) {
        push_front(value);
    }

    Node* temp = head;

    while(index > 0) {
        temp = temp->next;
        --index;
    }

    Node* prevNode = temp;
    prevNode->next = new Node();
    prevNode->next->data = value;
    prevNode->next->next = temp;
}

void LinkedList::erase(int index) {
    if(empty() != true) {
        Node* temp = head;

        while(index > 0) {
            temp = temp->next;
            --index;
        }
        Node* prevNode = temp;
        prevNode->next = temp->next;
        delete temp;
    }
}

void LinkedList::reverse() {
    Node* currNode = head;
    Node* nextNode = nullptr;
    Node* prevNode = nullptr;

    while(currNode != nullptr) {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }

    head = prevNode;
}