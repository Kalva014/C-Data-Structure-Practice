#include <iostream>
#include "queue.cpp"

int main() {
    Queue* queueThing = new Queue();

    std::cout << "Is the queue empty? " << queueThing->empty() << std::endl;
    queueThing->enqueue('a');
    queueThing->enqueue('b');
    queueThing->enqueue('c');
    std::cout << "Should print out a,b,c" << std::endl;
    queueThing->print();
    
    queueThing->dequeue();
    std::cout << "Should print out b,c" << std::endl;
    queueThing->print();
    return 0;
}