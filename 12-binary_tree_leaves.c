#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves
 * @tree: the binary tree
 * Return: number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
	return (0);
	if (!tree->left && !tree->right)
	return (1);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
