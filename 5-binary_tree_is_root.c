#include "binary_trees.h"


/**
 * binary_tree_is_root - check if node is root
 * @node: node to be tested if root
 * Return: 0 if not root 1 if is
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
