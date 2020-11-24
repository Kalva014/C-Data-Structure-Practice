#pragma once
#include "queue.cpp"

class Queue {
    private:
        int size; // The amount that is occupied in the array
        int capacity; // The total amount that could be help by the array
        char* arrayPtr;

    public:
        Queue(int capacity) {
            size = 0;
            this->capacity = capacity;
            arrayPtr = new char[capacity];
        }

        ~Queue(){
            delete[] arrayPtr;
        }

        void enqueue(char value); // adds item at end of available storage
        void dequeue(); // returns value and removes least recently added element
        bool empty();
        bool full();
        void print();
        void resize();
};


