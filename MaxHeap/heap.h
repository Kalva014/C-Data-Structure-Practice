#pragma once
#include "heap.cpp"
#include <vector>

class MaxHeap {
    private:
        std::vector<int>* arrayPtr;
    public:
        MaxHeap() {
            arrayPtr = new std::vector<int>();
        }
        ~MaxHeap() {
            delete arrayPtr;
        }
        
        void insert(int value);
        void shift_up(); // needed for insert
        int get_max(); // returns the max item, without removing it
        int get_size(); // return number of elements stored
        bool is_empty(); // returns true if heap contains no elements
        int extract_max(); // returns the max item, removing it
        void shift_down(); // needed for extract_max
        void remove(int i); // removes item at index x
        void heapify(); // create a heap from an array of elements, needed for heap_sort
        void heap_sort(); // take an unsorted array and turn it into a sorted array in-place using a max heap or min heap
};