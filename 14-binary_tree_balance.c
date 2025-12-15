#include "binary_trees.h"
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree
* Return: balance factor of the tree, or 0 if tree is NULL
*
* Balance Factor Concept
* The balance factor (BF) of a node in a binary tree is:
* Height of left subtree − Height of right subtree
* Left heavy → positive BF
* Right heavy → negative BF
* Perfectly balanced → BF = 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int BF, left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	BF = left_height - right_height;
	return (BF);
}
