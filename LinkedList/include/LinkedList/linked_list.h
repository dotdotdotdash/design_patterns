/**
 * @file linked_list.h
 * @author Venkatavaradhan Vembanoor Lakshmi Narayanan (venkatavaradhan93@gmail.com)
 * @brief A basic class for singly linked list
 * @version 0.1
 * @date 2020-05-04
 * @copyright Copyright (c) 2020
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList
{
    public:
        /**
         * @brief Construct a new Linked List object
         * A constructor for linked list class
         */
        LinkedList();
        /**
         * @brief Destroy the Linked List object
         * A destructor for linked list class
         */
        virtual ~LinkedList() {};
        /**
         * @brief Insert front
         * A member function to add a node at the front of a linked list
         * @param value 
         */
        void InsertFront(const int& value);
        /**
         * @brief Insert middle
         * A member function to insert a node in the middle of a linked list
         * @param value 
         * @param int 
         * @return true 
         * @return false 
         */
        bool InsertMiddle(const int& value, const unsigned int& index);
        /**
         * @brief Insert end
         * A member function to add a node at the end of a linked list
         * @param value 
         */
        void InsertEnd(const int& value);
        /**
         * @brief Delete nodes by value
         * A member function to delete a nodes from linked list by value
         * @param value 
         */
        void DeleteNodesByValue(const int& value);
        /**
         * @brief Delete node by index
         * A member function to delete a node from a linked list by index
         * @param int 
         * @return true 
         * @return false 
         */
        bool DeleteNodeByIndex(const unsigned int& index);
        /**
         * @brief Display
         * A member function to display the linked list
         */
        void Display();

    private:
        /**
         * @brief Node
         * Node structure
         */
        struct Node
        {
            int value;
            Node* next;
        };
        /**
         * @brief Head
         * Head node of the linked list
         */
        Node* head_;
};

#endif  // LINKED_LIST_H