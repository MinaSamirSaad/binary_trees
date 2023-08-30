#include "binary_trees.h"


/**
 * binary_tree_delete - delete whole binary tree
 * @tree: pointer to binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
