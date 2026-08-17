#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node right-child
 * @parent: pointer to node to insert right-child
 * @value: value to store new node
 *
 * Return: pointer to created node otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);

	if (new_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}

	parent->right = new_right;

	return (new_right);
}
