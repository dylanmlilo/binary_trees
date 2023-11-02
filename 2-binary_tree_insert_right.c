#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 *                            the right-child of another node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node, *temp;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        temp = parent->right;
        parent->right = new_node;
        new_node->right = temp;
        temp->parent = new_node;
    }
    else
    {
        parent->right = new_node;
    }

    return (new_node);
}