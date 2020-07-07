/**
 * @file binary_search_tree.h
 * @author Venkatavaradhan Vembanoor Lakshmi Narayanan (venkatavaradhan93@gmail.com)
 * @brief A class for Binary search tree
 * @version 0.1
 * @date 2020-07-06
 * @copyright Copyright (c) 2020
 */

#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iostream>

/**
 * @brief Node in BST
 */
struct Node
{
    int value;  /*< Value of the node */
    Node* left_child;  /*< Pointer to left child */
    Node* right_child;  /*< Pointer to right child */
    /**
     * @brief Construct a new Node object
     * @param value - Value of the node
     * @param left_child - Pointer to left child
     * @param right_child - Pointer to right child
     */
    Node(const int& value, Node* left_child, Node* right_child) : value(0), left_child(nullptr), right_child(nullptr) {}
};

/**
 * @brief A class for binary search tree
 */
class BinarySearchTree
{
    public:
        /**
         * @brief Construct a new Binary Search Tree object
         */
        BinarySearchTree() {}
        /**
         * @brief Destroy the Binary Search Tree object
         */
        ~BinarySearchTree() {}
        /**
         * @brief A method to insert a new node to BST
         * @param value - Value to be inserted
         */
        void InsertNode(const int& value);
        /**
         * @brief A method to delete a node in BST
         * @param value - Value to be deleted
         */
        void DeleteNode(const int& value);
        /**
         * @brief A method to find node using Pre order traversal
         * @param value - Key to find
         */
        void FindPreOrder(const int& value);
        /**
         * @brief A method to find node using In order traversal
         * @param value - Key to find
         */
        void FindInOrder(const int& value);
        /**
         * @brief A method to find node using Post order traversal
         * @param value - Key to find
         */
        void FindPostOrder(const int& value);
        /**
         * @brief A method to display BST
         */
        void DisplayTree() const;
    
    private:
        /**
         * @brief Root node
         */
        Node* root_ = nullptr;
};

#endif  // BINARY_SEARCH_TREE_H