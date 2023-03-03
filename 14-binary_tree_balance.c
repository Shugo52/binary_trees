#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Binary tree node
 *
 * Return: Balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_node;
	size_t r_node;

	if (!tree)
		return (0);

	l_node = binary_tree_height(tree->left);
	r_node = binary_tree_height(tree->right);

	if (tree->left)
		l_node++;

	if (tree->right)
		r_node++;

	return (l_node - r_node);
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
