#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverses a binary tree in levelorder'ly
 *
 * @tree: Binary tree root node.
 * @func: Pointer to function to execute on node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t depth = 0, height;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	while (depth <= height)
		print_level((binary_tree_t *)tree, func, depth++);
}

/**
 * print_level - Prints the nodes on a level.
 *
 * @tree: Root node.
 * @func: Pointer to function to execute on node.
 * @level: Level at which to print nodes.
 */
void print_level(binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (!level)
	{
		func(tree->n);
		return;
	}

	print_level(tree->left, func, --level);
	print_level(tree->right, func, level);
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
