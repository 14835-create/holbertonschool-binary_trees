#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance factor of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: balance factor otherwise NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
