#pragma once
#include "linkedlist.cpp"

struct Node {
    char data;
    Node* next;
};

// THIS IS FOR A SINGLY LINKED LIST
class LinkedList{
    private:
        Node* head;
        Node* tail;

    public:
        LinkedList(){ 
            head = nullptr;
            tail = nullptr; 
        }

        ~LinkedList(){
            delete head;
            delete tail;
        }
        int size();
        bool empty();
        char value_at(int index); // - returns the value of the nth item (starting at 0 for first)
        void push_front(char value); // adds an item to the front of the list
        char pop_front(); // remove front item and return its value
        void push_back(char value); //adds an item at the end
        char pop_back(); // removes end item and returns its value
        char front(); // get value of front item
        char back(); //get value of end item
        void insert(int index, char value); // insert value at index, so current item at that index is pointed to by new item at index
        void erase(int index); // removes node at given index
        char value_n_from_end(int numberOfValsAwayFromIndex); // returns the value of the node at nth position from the end of the list
        void reverse(); // reverses the list
        void remove_value(char value); // removes the first item in the list with this value
};