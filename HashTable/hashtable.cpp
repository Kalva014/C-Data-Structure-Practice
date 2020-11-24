#pragma once
#include "hashtable.h"

int HashTable::hash(int key) {
    return key % capacity;
}

void HashTable::add(int key) {
    int index = hash(key);
    if(exists(key) == true) {
        while(arrPtr[index] != 0) {
            ++index;
        }

        arrPtr[index] = key;
    }
    else {
        int index = hash(key);
        arrPtr[index] = key;
    }
}

// This function kinda sus cause doesn't check for linear probling
bool HashTable::exists(int key) {
    int index = hash(key);
    
    if(arrPtr[index] != 0) {
        return true;
    }
    return false;
}

int HashTable::get(int key) {
    if(exists(key)) {
        int index = hash(key);
        return arrPtr[index];
    }
    return 0;
}

void HashTable::remove(int key) {
    if(exists(key)) {
        int index = hash(key);
        arrPtr[index] = 0;
    }
}