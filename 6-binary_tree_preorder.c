#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse ove ra binary tree in pre-order
 * and implement soem function on each node
 * @tree: a pointer to the root
 * @func: a function pointer to the function to implement
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
