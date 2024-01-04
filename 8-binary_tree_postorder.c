#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse over a binary tree post-order
 * and implement some function on each node
 * @tree: a pointer to the root
 * @func: a function pointer to the function to implement
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
