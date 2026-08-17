#include "binary_trees.h"

/**
 * binary_tree_depth - depth node measure of binary tree
 * @tree: pointer to node mesuring depth
 *
 * Return: depth of node otherwise NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
