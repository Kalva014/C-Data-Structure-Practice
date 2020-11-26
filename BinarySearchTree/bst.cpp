#pragma once
#include <iostream>
#include "bst.h"

Node* BST::insert(Node* currNode, int value) { // insert value into tree
    if(currNode == nullptr) {
        return currNode;
    }

    if(value < currNode->data) {
        insert(currNode, currNode->left, value);
    }
    else if(value > currNode->data) {
        insert(currNode, currNode->right, value);
    }
    else{
        Node* temp = new Node();
        temp->data = value;
        if(value > currNode->data && value < prevNode->data) {
            Node* temp2 = prevNode->right;
            prevNode->right = temp;
            temp->right = temp2;
        }
        else if(value < currNode->data && value > prevNode->data) {
            Node* temp2 = prevNode->right;
            prevNode->right = temp;
            temp->right = temp2;
        }
    }
    
} 

int BST::get_node_count() { // get count of values stored
    if(root->left == nullptr && root->right == nullptr) {
        return 1;
    }
} 

void BST::print_values(Node* node) {  // prints the values in the tree, from min to max
    if(node == nullptr) {
        return;
    }

    // Start on the left children
    print_values(node->left);

    std::cout << node->data << " ";

    print_values(node->right);
}

void BST::delete_tree(Node* currNode) {
    if(currNode == nullptr) {
        return;
    }
    
    if(node->left != nullptr) {
        delete_tree(currNode->left);
    }
    if(node->right != nullptr) {
        delete_tree(currNode->right);
    }

    delete_value(currNode->data);
}

// bool BST::is_in_tree(int value, Node* startingNode) { // returns true if given value exists in the tree
//     if(value == root->data) {
//         return true;
//     }
//     if(Node == nullptr) {
//         return false;
//     }

//     else if(value < root->data) {
//         if_in_tree()return false;
//     }
// }

int BST::get_height(Node* currNode) { // returns the height in nodes (single node's height is 1)
    if(root->left == nullptr && root->right == nullptr) {
        return 0;
    }

    int leftSubtreeDepth = get_height(currNode->left);
    int rightSubtreeDepth = get_height(currNode->right);

    if(leftSubtreeDepth > rightSubtreeDepth) {
        return leftSubtreeDepth + 1;
    }
    else{
        return rightSubtreeDepth + 1;
    }
} 

int BST::get_min() { // returns the minimum value stored in the tree
    Node* temp = root;

    while(temp->left != nullptr) {
        temp = temp->left;
    }

    return  temp->data;
}

int BST::get_max() { // returns the maximum value stored in the tree
    Node* temp = root;

    while(temp->right != nullptr){
        temp = temp->right;
    }

    return temp->data;
} 

Node* BST::delete_value(int value, Node* currNode, Node* prevNode) {
    if(root->left == nullptr && root->right == nullptr) {
        return;
    }
     
    if(value < currNode->data) { // Check leftside first
        delete_value(value, currNode->left, currNode);
    }
    else if(value > currNode->data) { // Check rightside first
        delete_value(value, currNode->right, currNode);
    }
    else {
        if(root->left == nullptr) {
            Node* temp = root->right;
            return temp;
        }
        else if
    }
}

Node* BST::get_successor(Node* parentNode) {
    if(parentNode->right == nullptr) {
        std::cout << "No successor" << std::endl;
        return parentNode;
    }

    return parentNode->right;
}