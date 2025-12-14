#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: pointer
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t i;
size_t j;
if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
i = binary_tree_height(tree->right);
j = binary_tree_height(tree->left);
if (i > j)
	return (i + 1);
else
	return (j + 1);
}
