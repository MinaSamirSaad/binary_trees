#include "binary_trees.h"

/**
 * binary_tree_height - compute height of tree
 * @tree: binary tree pointer
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left += binary_tree_height(tree->left);
	right  += binary_tree_height(tree->right);
/*1 for parent*/
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
