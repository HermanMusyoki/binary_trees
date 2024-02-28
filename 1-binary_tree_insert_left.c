#include "binary_trees.h"

/**
 * binary_tree_insert_left -  A function that inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: Address to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the new node or Null (error)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
