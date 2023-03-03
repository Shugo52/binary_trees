#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Binary tree root node
 *
 * Return: 1 if tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, leaves;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);

	if ((int)leaves != 1 << height)
		return (0);

	return (1);
}

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

/**
 * binary_tree_height - Computes the HEIGHT of a binary tree
 * @tree: Binary tree root node
 *
 * Return: Height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left;
	size_t h_right;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);

	return (h_right + 1);
}
