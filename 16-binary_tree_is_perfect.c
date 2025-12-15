#include "binary_trees.h"
/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 if the tree is perfect, 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (binary_tree_is_full(tree) == 0)
		return (0);
	return (1);
}

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: pointer to the root node of the tree to check
* Return: 1 if the tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}
/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: pointer
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t i = 0, j = 0;
if (tree == NULL)
	return (0);

i += binary_tree_height(tree->right);
j += binary_tree_height(tree->left);
if (i > j)
	return (i + 1);
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
