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

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	else
		return (right);

}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the binary tree
 * Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
	return (0);
	left = (int)binary_tree_height(tree->left);
	right = (int)binary_tree_height(tree->right);
	return (left - right);
}
