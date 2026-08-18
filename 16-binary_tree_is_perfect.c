#include "binary_trees.h"

/**
 * height - measures height of tree
 * @tree: pointer to root rode of tree
 *
 * Return: height of tree otherwise NULL
 */

static size_t height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree
 *
 * Return: 1 = perfect otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	if (left_h != right_h)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
