#include "binary_trees.h"

/**
 * binary_tree_inorder - binary tree inorder traveral
 * @tree: pointer to root of tree to be traversed
 * @func: pointer to function call node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
