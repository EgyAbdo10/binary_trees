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

/**
 * binary_tree_uncle - get the uncle of a node in a binary tree
 * @node: a pointer to the node
 * Return: a pointer to the uncle
 * or NULL if the uncle not found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL)
return (NULL);
return (binary_tree_sibling(node->parent));
}
