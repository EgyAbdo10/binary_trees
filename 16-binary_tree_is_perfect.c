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
 * binary_tree_height - get the height of a binary tree
 * @tree: a pointer to the tree root
 * Return: the heigth of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return ((left_height > right_height ? left_height : right_height) +1);
}
/**
 * power - get the number of a number raised power exp
 * @number: the number
 * @exp: the power
 * Return: the number raised to the power
*/
size_t power(int number, int exp)
{
if (exp == 0)
return (1);
return (power(number, exp - 1) * number);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfrect or not
 * @tree: a pointer to the root node
 * Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t size = binary_tree_size(tree);
size_t height = binary_tree_height(tree);
if (power(2, height + 1) - 1 == size)
return (1);
else
return (0);
}
