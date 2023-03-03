#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root.
 * @node: Node to check if root.
 *
 * Return: 1 if node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
