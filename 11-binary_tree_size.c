#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Binary tree root node
 *
 * Return: Integer size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;

	if (!tree)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}
