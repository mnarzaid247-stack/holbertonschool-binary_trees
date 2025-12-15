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
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree
* Return: balance factor of the tree, or 0 if tree is NULL
*
* Description:
* The balance factor (BF) of a node in a binary tree is:
* Height of left subtree − Height of right subtree
*
* Left heavy → positive BF
* Right heavy → negative BF
* Perfectly balanced → BF = 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
