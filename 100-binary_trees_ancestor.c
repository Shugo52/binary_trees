#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds lowest common ancestor of two nodes.
 *
 * @first: First node.
 * @second: Second node.
 *
 * Return: Pointer to ancestor, NULL otherwise.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t f_depth, s_depth;

	if (!first || !second)
		return (NULL);

	/* Find depth of both nodes */
	f_depth = binary_tree_depth(first);
	s_depth = binary_tree_depth(second);

	/* Ensure both depths are equal */
	while (f_depth < s_depth)
	{
		second = second->parent;
		s_depth--;
	}

	while (f_depth > s_depth)
	{
		first = first->parent;
		f_depth--;
	}

	/* Compare and move reduce depths of nodes if not equal */
	while (first)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}

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
