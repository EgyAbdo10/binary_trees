#include "binary_trees.h"
/**
 * binary_tree_leaves - get the number of leaves in a binary tree
 * @tree: a pointer to the tree root
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left_count, right_count;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
left_count = binary_tree_leaves(tree->left);
right_count = binary_tree_leaves(tree->right);
return (left_count + right_count);
}