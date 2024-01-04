#include "binary_trees.h"

size_t bi_tree_get_depth(binary_tree_t *node)
{
    if (node->parent == NULL)
    return (0);
    size_t depth = bi_tree_get_depth(node->parent);
    return (depth++);
}

size_t binary_tree_height(const binary_tree_t *tree)
{

}