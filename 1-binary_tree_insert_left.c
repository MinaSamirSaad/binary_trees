#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent of node
 * @value: the value of the node
 * Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (!parent)
	return (NULL);

	temp = malloc(sizeof(binary_tree_t));

	if (!temp)
	return (NULL);

	temp->n = value;
	temp->right = NULL;
	if (parent->left)
		temp->left = parent->left;
	else
		temp->left = NULL;
	parent->left = temp;
	return (temp);
}
