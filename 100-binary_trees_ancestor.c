#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest common ancestor
 *
 * @first: pointer
 * @second: pointer
 *
 * Return: binary_tree_t
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, 
		const binary_tree_t *second)
{
const binary_tree_t *tmp;
const binary_tree_t *node;
if (first == NULL || second == NULL)
	return (NULL);
node = first;
tmp = second;
while (node != NULL)
{
	tmp = second;
	while (tmp != NULL)
	{
	if (tmp == node)
		return ((binary_tree_t *)tmp);
	tmp = tmp->parent;
	}
node = node->parent;
}
return (NULL);
}
