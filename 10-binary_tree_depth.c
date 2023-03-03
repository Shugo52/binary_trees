#include "binary_trees.h"

/**
 * binary_tree_depth - Computes the DEPTH of a binary tree
 * @tree: Binary tree root node
 *
 * Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !(tree->parent))
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
