#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the right of a parent
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
if (parent == NULL)
return (NULL);
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);
new_node->n = value;
new_node->parent = parent;
new_node->right = NULL;
new_node->right = NULL;
if (parent->right != NULL)
{
parent->right->parent = new_node;
new_node->right = parent->right;
}
parent->right = new_node;
return (new_node);
}
