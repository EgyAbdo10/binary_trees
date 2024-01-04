#include "binary_trees.h"

/**
 * binary_tree_sibling - get the sibling of a node in a binary tree
 * @node: a pointer to the node
 * Return: a pointer to the sibling
 * or NULL if the sibling not found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
else
{
if (node == node->parent->left)
return (node->parent->right);
else
return (node->parent->left);
}
}