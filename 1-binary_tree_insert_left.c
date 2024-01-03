#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node to the left of a parent
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
return (NULL);
binary_tree_t *new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);
binary_tree_t *old_left = parent->left;
parent->left = new_node;
if (old_left != NULL)
new_node->left = old_left;

return (parent->left);
}