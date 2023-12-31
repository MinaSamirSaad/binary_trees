#include "binary_trees.h"

/**
 * binary_tree_depth - compute depth of binary tree
 * @tree: binary tree
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (depth);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
