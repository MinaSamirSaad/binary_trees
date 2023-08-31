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
	right += binary_tree_height(tree->right);
	/*1 for parent*/
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_is_perfect - check if is full tree
 * @tree: binary tree
 * Return: 1 if full 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0, res = 0;

	if (tree == NULL)
		return (0);
	/* first condition is left and right hight are equal*/
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left == right)
	{
		/* second condition is to check the tree is full*/
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		if (tree->left && tree->right)
		{
			res += binary_tree_is_perfect(tree->left);
			res += binary_tree_is_perfect(tree->right);
		}
		else
			return (0);
		return (res % 2 == 0);
	}
	else
		return (0);
}
