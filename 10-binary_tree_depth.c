#include "binary_trees.h"
/**
 * binary_tree_depth - get the depth of a node
 * @tree: a pointer to the tree
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;
if (tree->parent == NULL)
return (0);
depth = binary_tree_depth(tree->parent);
return (++depth);
}
