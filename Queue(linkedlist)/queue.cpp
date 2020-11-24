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

    Node* temp = new Node();
    temp->data = value;
    temp->next = nullptr;
    tail->next = temp;
    tail = temp;
}

char Queue::dequeue() {
    if(empty() == true) {
        return 'L';
    }

    Node* temp = head;
    head = head->next;
    return head->data;
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