#pragma once
#include "hashtable.cpp"

// A key is converted into an integer index by using a hash function.
// This index decides the linked list where the key-value pair record belongs.

class HashTable {
    private:
        int size; // How much of the table is currently full
        int capacity; // The total capacity of ints that the table can hold 
        int* arrPtr;
        int hash(int key); // m is the size of the hashtable
    public:
        HashTable(int capacity) {
            size = 0;
            this->capacity = capacity;
            arrPtr = new int[capacity];
        }
        ~HashTable() {
            delete[] arrPtr;
        }

        void add(int key); // if key already exists, update value
        bool exists(int key);
        int get(int key);
        void remove(int key);
};