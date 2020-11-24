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
        ~Queue() {
            delete head;
            delete tail;
        }
        
        void enqueue(char value); // adds value at position at tail
        void dequeue();
        bool empty();
        void print();
};