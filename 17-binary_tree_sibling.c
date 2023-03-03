#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: node to find it's sibling.
 *
 * Return: Pointer to sibling or NULL on error.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !(node->parent))
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
