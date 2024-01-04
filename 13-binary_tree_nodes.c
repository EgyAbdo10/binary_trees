#include "binary_trees.h"
/**
 * binary_tree_nodes - get the number of nodes that have
 * at least one child in a binary tree
 * @tree: a pointer to the tree root
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left_count, right_count;
if (tree == NULL)
return (0);
if (tree->left != NULL || tree->right != NULL)
return (1);
else
return (0);
left_count = binary_tree_nodes(tree->left);
right_count = binary_tree_nodes(tree->right);
return (left_count + right_count);
}
