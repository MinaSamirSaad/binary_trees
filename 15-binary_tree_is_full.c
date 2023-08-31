#include "binary_trees.h"

/**
 * binary_tree_is_full - check if is full tree
 * @tree: binary tree
 * Return: 1 if full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		res += binary_tree_is_full(tree->left);
		res += binary_tree_is_full(tree->right);
	}
	else
		return (0);
	return (res % 2 == 0);
}
