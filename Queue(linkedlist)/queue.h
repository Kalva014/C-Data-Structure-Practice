#pragma once
#include "queue.cpp"

struct Node {
    Node* next;
    char data;
};

class Queue {
    private:
        Node* head;
        Node* tail;
    public:
        Queue(){
            head = nullptr;
            tail = nullptr;
        }
        void enqueue(char value); // adds value at position at tail
        char dequeue(); // returns value and removes least recently added element (front)
        bool empty();
        void print();
};