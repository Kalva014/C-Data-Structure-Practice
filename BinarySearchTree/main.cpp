#pragma once
#include <iostream>
#include "bst.cpp"

int main() {
    BST* tree = new BST(5);

    tree->insert(nullptr, tree->root, 3);
    return 0;
}