#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node
 *
 * @parent: Pointer to parent node.
 * @value: Integer to put in the newly created node.
 *
 * Return: Pointer to new left node or NULL on any failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	/* Create node with parent */
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	/* If parent->left exists, assign node to current left's parent */
	/* Then assign the current left to node->left */
	if (!(parent->left))
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}

	return (node);
}
