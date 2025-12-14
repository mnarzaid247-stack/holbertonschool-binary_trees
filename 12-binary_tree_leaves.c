#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer
 *
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t i;
if (tree == NULL)
	return (0);
if (tree->right == NULL && tree->left == NULL)
	return (1);
i = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
return (i);
}
