#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest
 *                         common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp1 = first;
	const binary_tree_t *temp2 = second;

	while (temp1 != temp2)
	{
		if (temp1 == NULL)
			temp1 = second;
		else
			temp1 = temp1->parent;

		if (temp2 == NULL)
			temp2 = first;
		else
			temp2 = temp2->parent;
	}

	return ((binary_tree_t *)temp1);
}
