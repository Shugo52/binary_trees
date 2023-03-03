#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Node to find it's uncle.
 *
 * Return: Pointer to node uncle, NULL otherwise.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *pparent;

	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);

	pparent = node->parent->parent;

	if (pparent->left == node->parent)
		return (pparent->right);
	return (pparent->left);
}
