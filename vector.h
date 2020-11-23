#pragma once
#include "vector.cpp"

//template <typename T>
class Vector {
    private:
        int size; // What's currently in the array
        int capacity; // What the array can handle
        char* arrayPtr;

        void resize(); // When reach capacity, resize to double the size. If size is 1/4 of capcity resize to half
    public:
        Vector() {
            size = 0;
            capacity = 0;
            arrayPtr = new char[capacity];
        }
        Vector(int capacity){
            size = 0;
            this->capacity = capacity;
            arrayPtr = new char[capacity];
        }

        int get_size(); // Number of items
        int get_capacity(); // Number of items it can hold
        bool is_empty();
        char at(int index); // Returns an item at given index, fails if out of bounds
        void push(char item); // Append the element to the array
        void insert(int index, char item); // Inserts item at index, shifts item and trailing values to the right
        void prepend(char item); // Appending to beginning of array
        char pop(); // Remove from end of array and return that value
        void delete_item(int index); // Delete item and shift contents to the left
        void remove(char item); // Looks for value and removes even if there are multiple instances of it
        int find(char item); // Look for value and return first index with that value, else return -1
};