#include "binary_trees.h"

/**
 * binary_tree_is_ perfect check if is full tree
 * @tree: binary tree
 * Return: 1 if full 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		left = 1 + binary_tree_is_perfect(tree->left);
		right = 1 + binary_tree_is_perfect(tree->right);
	}
	else
		return (0);
	return (left == right && (left + right) % 2 == 0);
}
