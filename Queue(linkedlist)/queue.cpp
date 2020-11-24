#pragma once
#include <iostream>
#include "queue.h"

void Queue::enqueue(char value) {
    if(empty() == true) {
        head = new Node();
        head->data = value;
        head->next = nullptr;
        tail = head;
    }
    else {
        Node* temp = new Node();
        temp->data = value;
        temp->next = nullptr;
        tail->next = temp;
        tail = temp;
    }
}

void Queue::dequeue() {
    if(empty() == false) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

bool Queue::empty() {
    if(head == nullptr) {
        return true;
    }
    return false;
}

void Queue::print() {
    if(empty() != true) {
        Node* curr = head;

        while(curr != nullptr) {
            std::cout << curr->data << std::endl;
            curr = curr->next;
        }
        delete curr;
    }
}