#include "binary_search_tree/binary_search_tree.h"

void BinarySearchTree::InsertNode(const int& value)
{
    Node* new_node, current_node, prev_node;
    new_node = new Node();
    new_node->value = value;

    current_node = root_;

    while(current_node)
    {
        prev_node = current_node;
        if(current_node->value > new_node->value)
        {
            current_node = current_node->left_child;
        }
        else
        {
            current_node = current_node->right_child;
        }
    }

    if(!prev_node)
    {
        prev_node = new_node;
    }
    else if(prev_node->value > new_node->value)
    {
        prev_node->left_child = new_node;
    }
    else
    {
        prev_node->right_child = new_node;
    }
}

void BinarySearchTree::DisplayTree() const
{

}

int main()
{
    
    return 0;
}