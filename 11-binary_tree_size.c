#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 *
 * @tree: pointer
 *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t i;
if (tree == NULL)
	return (0);
i = 1 + binary_tree_size(tree->left) +  binary_tree_size(tree->right);
return (i);
}
