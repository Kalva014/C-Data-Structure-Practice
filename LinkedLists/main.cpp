#pragma once
#include <iostream>
#include "linkedlist.cpp"

int main(){
    LinkedList* chars = new LinkedList();
    
    std::cout << "What is the size? " << chars->size() << std::endl;
    std::cout << "Is the list empty? " << chars->empty() << std::endl;

    chars->push_front('A');
    chars->push_front('B');
    std::cout << "Value should be at index 0..... " << chars->value_at(0) << std::endl;

    chars->pop_front();
    std::cout << "Value should be at index 0....." << chars->value_at(0) << std::endl;

    chars->push_back('b');
    chars->push_back('c');
    std::cout << "Value should be at index 1....." << chars->value_at(1) << std::endl;
    std::cout << "Value should be at index 2....." << chars->value_at(2) << std::endl;

    chars->pop_back();
    std::cout << "Value at the front: " << chars->front() << std::endl;
    std::cout << "Value at the back: " << chars->back() << std::endl;

    chars->insert(1, 'Z');
    std::cout << "Value should be at index 1....." << chars->value_at(1) << std::endl;
    std::cout << "Value should be at index 2....." << chars->value_at(2) << std::endl;

    chars->pop_back();
    chars->pop_back();
    chars->push_back('a');
    chars->push_back('b');
    chars->push_back('c');
    std::cout << "Value should be at index 1....." << chars->value_at(0) << std::endl;
    std::cout << "Value should be at index 2....." << chars->value_at(1) << std::endl;
    std::cout << "Value should be at index 2....." << chars->value_at(2) << std::endl;
    std::cout << "What is the size? " << chars->size() << std::endl;

    chars->reverse();
    std::cout << "After reversing value should be at index 1....." << chars->value_at(0) << std::endl;
    std::cout << "Value should be at index 2....." << chars->value_at(1) << std::endl;
    std::cout << "Value should be at index 2....." << chars->value_at(2) << std::endl;
    return 0;
}