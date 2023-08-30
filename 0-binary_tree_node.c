#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree
 * @parent: the parent of node
 * @value: the value of the node
 * Return: new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (!temp)
	return (NULL);

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
