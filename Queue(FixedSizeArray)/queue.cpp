#pragma once
#include <iostream>
#include "queue.h"

void Queue::enqueue(char value) { // adds item at end of available storage
    if(full() == true) {
        resize();
    }

    arrayPtr[size + 1] = value;
    ++size;
} 

void Queue::dequeue() { // removes least recently added element
    if(empty() == false) {
        for(int i = 1; i < size; ++i) {
            arrayPtr[i] = arrayPtr[i+1];
        }

        --size;
    }
}

bool Queue::empty() {
    if(size == 0) {
        return true;
    }
    
    return false;
}

bool Queue::full() {
    if(size == capacity) {
        return true;
    }
    return false;
}

void Queue::print() {
    for(int i = 0; i < size; ++i) {
        std::cout << arrayPtr[i] << std::endl;
    }
}

void Queue::resize() {
    capacity *= 2;
    char* new_array = new char[capacity];
    
    for(int i = 0; i < size; i++) {
        new_array[i] = arrayPtr[i];
    }

    arrayPtr = new_array;
}