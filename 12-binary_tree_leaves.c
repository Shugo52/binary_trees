#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Binary tree root node.
 *
 * Return: int representing number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaf;
	size_t r_leaf;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	l_leaf = binary_tree_leaves(tree->left);
	r_leaf = binary_tree_leaves(tree->right);

	return (r_leaf + l_leaf);
}
