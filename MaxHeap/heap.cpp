#pragma once
#include "heap.h"

void MaxHeap::insert(int value) {

}

void shift_up(); // needed for insert

int MaxHeap::get_max() { // returns the max item, without removing it
    if(is_empty() == true) {
        return -1;
    }
    return arrayPtr->at(0);
} 

int MaxHeap::get_size(){ // return number of elements stored
    if(is_empty() == true) {
        return 0;
    }
    return arrayPtr->size();
}

bool MaxHeap::is_empty() { // returns true if heap contains no elements
    if(arrayPtr->size() == 0) {
        return true;
    }
    return false;
}

int MaxHeap::extract_max() { // returns the max item, removing it
    if(is_empty() == true) {
        return -1;
    }
    
    int temp = arrayPtr->at(0);
    arrayPtr->erase(0);
    return temp;
}

void MaxHeap::remove(int i) { // removes item at index x
    
} 
void heapify(); // create a heap from an array of elements, needed for heap_sort
void heap_sort(); // take an unsorted array and turn it into a sorted array in-place using a max heap or min heap