#pragma once
#include <iostream>
#include "vector.cpp"

int main() {
    Vector* vectorPtr1 = new Vector(4);
    
    std::cout << "Is array empty(should be true): " << vectorPtr1->is_empty() << std::endl;

    vectorPtr1->push('b');
    vectorPtr1->push('l');
    vectorPtr1->push('u'); 
    vectorPtr1->push('e');
    std::cout << "Size: " << vectorPtr1->get_size() << std::endl;
    std::cout << "Capacity: " << vectorPtr1->get_capacity() << std::endl;

    std::cout << "Popped value: " << vectorPtr1->pop() << std::endl;
    std::cout << vectorPtr1->find('l') << std::endl;
    std::cout << "Size: " << vectorPtr1->get_size() << std::endl;
    std::cout << "Capacity: " << vectorPtr1->get_capacity() << std::endl;

    vectorPtr1->insert(1, 'X');
    
    return 0;
}