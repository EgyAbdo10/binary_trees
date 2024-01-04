#include "binary_trees.h"

/**
 * binary_trees_ancestor - get the lolwest ancestor
 * @first: the first node
 * @second: the second node
 * Return: the lowest ansector
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
binary_tree_t *second_iter;
while (first != NULL)
{
second_iter = (binary_tree_t *)second;
while (second_iter != NULL)
{
if (first == second_iter)
return (second_iter);
second_iter = second_iter->parent;
}
first = first->parent;
}
return (NULL);
}
