#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to node checked
 *
 * Return: 1 = node is root otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
