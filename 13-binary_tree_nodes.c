#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes having one child at least
 * @tree: Binary tree node
 *
 * Return: Nodes with children in binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_node;
	size_t r_node;

	if (!tree)
		return (0);

	if (!(tree->left || tree->right))
		return (0);

	l_node = binary_tree_nodes(tree->left);
	r_node = binary_tree_nodes(tree->right);

	return (l_node + r_node + 1);
}
