#include "binary_trees.h"

/**
 *  binary_tree_depth - a function that measures the depth of a binary tree
 *
 *  @tree: pointer
 *
 *  Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t i;
if (tree == NULL)
	return (0);
if (tree->parent == NULL)
	return (0);
i = binary_tree_depth(tree->parent);
return (i + 1);
}
