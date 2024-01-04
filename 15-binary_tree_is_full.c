#include "binary_trees.h"

/**
 * binary_tree_size - get the number of nodes of a tree
 * @tree: a pointer to thw tree root
 * Return: the size of a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_size, right_size;
if (tree == NULL)
return (0);
left_size = binary_tree_size(tree->left);
right_size = binary_tree_size(tree->right);
return (left_size + right_size + 1);
}

/**
 * binary_tree_nodes - get the number of nodes that have
 * at zero or 2 children in a binary tree
 * @tree: a pointer to the tree root
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left_count, right_count;
if (tree == NULL)
return (0);
left_count = binary_tree_nodes(tree->left);
if ((tree->left == NULL && tree->right == NULL) ||
(tree->left != NULL && tree->right != NULL))
left_count++;
right_count = binary_tree_nodes(tree->right);
return (left_count + right_count);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
    return (0);
    if (binary_tree_nodes(tree) == binary_tree_size(tree))
    return (1);
    else
    return (0);
}