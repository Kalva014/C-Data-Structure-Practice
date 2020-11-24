#pragma once
#include <iostream>
#include "hashtable.cpp"

int main(){
    HashTable* tableOfInts = new HashTable(10);
    tableOfInts->add(6);
    tableOfInts->add(7);
    tableOfInts->add(2);
    std::cout << tableOfInts->exists(2) << std::endl;
    
    tableOfInts->remove(7);
    std::cout << tableOfInts->exists(7) << std::endl;

    //testing linear probing
    tableOfInts->add(6);
    std::cout << tableOfInts->get(6) << std::endl;
    std::cout << tableOfInts->get(7) << std::endl;
    return 0;
}