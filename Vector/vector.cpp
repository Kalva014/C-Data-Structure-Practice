#pragma once
#include "vector.h"
#include <iostream>

void Vector::resize() {
    if(size == capacity) { // Double the size
        char new_array[capacity * 2];

        for(int i = 0; i < size; i++) {
                new_array[i] = arrayPtr[i];
        }

        arrayPtr = new_array; //assign to new array
    }
    else if(size == ((1/4) * capacity)) {
        char new_array[capacity / 2];

        for(int i = 0; i < size; i++) {
            new_array[i] = arrayPtr[i];
        }

        arrayPtr = new_array; //assign to new array
    }
}

int Vector::get_size() {
    return size;
}

int Vector::get_capacity() {
    return this->capacity;
}

bool Vector::is_empty() {
    if(size == 0) {
        return false;
    }
    return true;
}

char Vector::at(int index){
    if(is_empty() == true) {
        std::cout << "Fail crash system" << std::endl;
    }
    
    if(index > size) {
        std::cout << "Fail crash system" << std::endl;
    }

    return arrayPtr[index];
}

void Vector::push(char item){
    size += 1;
    resize();
    arrayPtr[size] = item;
}

void Vector::insert(int index, char item) { //INSERT IS WRONG
    resize();
    char temp = arrayPtr[index];
    
    arrayPtr[index] = item;

    for(int i = index + 1; i < size + 1; i++) {
        arrayPtr[i + 1] = arrayPtr[i];
    }
    
    size += 1;
}

void Vector::prepend(char item) {
    insert(0, item);
}

char Vector::pop() {
    char temp = arrayPtr[size - 1];
    delete_item(0);
    size -= 1;
    return temp;
}

void Vector::delete_item(int index) {
    for(int i = index; i < size - 1; i++) {
        arrayPtr[i] = i + 1;
    }
    size -= 1;
}

void Vector::remove(char item){
    for(int i = 0; i < size; i++) {
        if(arrayPtr[i] == item) {
            delete_item(i);
        }
    }
}

int Vector::find(char item) {
    for(int i = 0; i < size; i++) {
        if(arrayPtr[i] == item) {
            std::cout << arrayPtr[i] << std::endl;
            return i;
        }
    }

    return -1;
}