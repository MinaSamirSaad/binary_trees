#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is leaf
 * @node: node to be tested
 * Return: 0 if not leaf 1 if leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
