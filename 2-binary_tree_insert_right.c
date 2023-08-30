#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent of node
 * @value: the value of the node
 * Return: new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (!parent)
	return (NULL);

	temp = malloc(sizeof(binary_tree_t));

	if (!temp)
	return (NULL);

	temp->n = value;
	temp->left = NULL;
	temp->parent = parent;
	if (parent->right)
	{
		temp->right = parent->right;
		parent->right->parent = temp;
	}
	else
		temp->right = NULL;
	parent->right = temp;
	return (temp);
}
