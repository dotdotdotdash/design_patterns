/**
 * @file linked_list.h
 * @author Venkatavaradhan Vembanoor Lakshmi Narayanan (venkatavaradhan93@gmail.com)
 * @brief A basic class for singly linked list
 * @version 0.1
 * @date 2020-05-04
 * @copyright Copyright (c) 2020
 * 
 * @mainpage
 * @section outline Outline
 * The purpose of this documentation is to give an idea how to use the Linked List class. The project was
 * done to learn about data structures and algorithms. \n
 * Please contribute to the project if you can: 
 * <a href="https://github.com/venkisagunner93/learning_algorithms/tree/master/LinkedList">Learning algorithms - Linked List</a>
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList
{
    public:
        /**
         * @brief A constructor for linked list class
         */
        LinkedList();
        /**
         * @brief A destructor for linked list class
         */
        virtual ~LinkedList() {};
        /**
         * @brief A member function to add a node at the front of a linked list
         * @param value - Value of the new node to be inserted
         */
        void InsertFront(const int& value);
        /**
         * @brief A member function to insert a node in the middle of a linked list
         * @param value - Value of the new node to be inserted
         * @param index - Index where the new node should be inserted
         * @return true 
         * @return false 
         */
        bool InsertMiddle(const int& value, const unsigned int& index);
        /**
         * @brief A member function to add a node at the end of a linked list
         * @param value - Value of the new node to be inserted
         */
        void InsertEnd(const int& value);
        /**
         * @brief A member function to delete nodes from linked list by value
         * @param value - Value of the node(s) to be deleted
         */
        void DeleteNodesByValue(const int& value);
        /**
         * @brief A member function to delete a node from a linked list by index
         * @param index - Index of the node to be deleted
         * @return true 
         * @return false 
         */
        bool DeleteNodeByIndex(const unsigned int& index);
        /**
         * @brief A member function to display the linked list
         */
        void Display();

    private:
        /**
         * @brief Node structure
         */
        struct Node
        {
            int value;
            Node* next;
        };
        /**
         * @brief Head node of the linked list
         */
        Node* head_;
};

#endif  // LINKED_LIST_H