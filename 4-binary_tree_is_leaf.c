#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks is a node is a leaf.
 * @node: Node to ckeck whether leaf or not.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);

	return (1);
}
