#include "binary_trees.h"
#include <stdio.h>
/**
 * get_shortest_path - get the shortest height of a binary tree
 * @tree: a pointer to the tree root
 * Return: the shortest heigth of the tree
*/
int get_shortest_path(const binary_tree_t *tree)
{
int left_len, right_len;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
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
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
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
int left_path, right_path, path;
if (tree == NULL)
return (0);
if (tree->left == NULL || tree->right == NULL)
{
path = get_longest_path(tree);
if (tree->left == NULL)
path *= -1;
return (path);
}
left_path = get_longest_path(tree->left);
right_path = get_longest_path(tree->right);
return (left_path - right_path);
}
