#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right child of a parent node
 *
 * @parent: Pointer to parent node.
 * @value: Integer to put in the newly created node.
 *
 * Return: Pointer to new right node or NULL on any failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	/* If parent->right exists, assign node to current right's parent */
	/* Then assign the current right to node->right */
	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	else
		node->right = NULL;

	/* Make parents right to be node */
	parent->right = node;

	/* Assign node values */
	node->parent = parent;
	node->n = value;
	node->left = NULL;

	return (node);
}
