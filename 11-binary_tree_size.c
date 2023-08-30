#include "binary_trees.h"

/**
 * binary_tree_size - compute size of tree
 * @tree: binary tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0;

	if (!tree)
		return (0);
	sz += binary_tree_size(tree->left);
	sz += binary_tree_size(tree->right);
	return (1 + sz);
}
