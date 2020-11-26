#pragma once
#include "bst.cpp"

struct Node {
    Node* left;
    Node* right;
    int data;
};

class BST {
    private:
        Node* root;
        Node* get_successor(Node* parentNode); // returns next-highest value in tree after given value, -1 if none
    
    public:
        BST(int number) {
            root = new Node();
            root->data = number;
            root->left = nullptr;
            root->right = nullptr;
        }
        ~BST() {
            delete root;
        }

        void insert(Node* currNode, int value); // insert value into tree
        int get_node_count(); // get count of values stored
        void print_values(Node* node); // prints the values in the tree, from min to max
        void delete_tree(Node* currNode);
        bool is_in_tree(int value, Node* startingNode); // returns true if given value exists in the tree
        int get_height(Node* currNode); // returns the height in nodes (single node's height is 1)
        int get_min(); // returns the minimum value stored in the tree
        int get_max(); // returns the maximum value stored in the tree
        Node* delete_value(int value, Node* currNode, Node* prevNode);
        
};