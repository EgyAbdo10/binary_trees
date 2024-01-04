#include "binary_trees.h"

/**
 * get_shortest_path - get the shortest height of a binary tree
 * @tree: a pointer to the tree root
 * Return: the shortest heigth of the tree
*/
int get_shortest_path(const binary_tree_t *tree)
{
int left_len, right_len;
if (tree == NULL || (tree->left == NULL || tree->right == NULL))
return (0);
left_len = get_shortest_path(tree->left);
right_len = get_shortest_path(tree->right);
return ((left_len < right_len ? left_len : right_len) +1);
}

/**
 * get_longest_path - get the longest height of a binary tree
 * @tree: a pointer to the tree root
 * Return: the longest heigth of the tree
*/
int get_longest_path(const binary_tree_t *tree)
{
int left_len, right_len;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);
left_len = get_longest_path(tree->left);
right_len = get_longest_path(tree->right);
return ((left_len > right_len ? left_len : right_len) +1);
}

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: a pointer to the tree root
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
// if (tree == NULL)
int long_path = get_longest_path(tree);
int short_path = get_shortest_path(tree);
return (long_path - short_path);
}