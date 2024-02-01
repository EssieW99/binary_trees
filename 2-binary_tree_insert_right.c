#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent of the created node
 * @value: the value of the created node
 * Return: returns a pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	rightnode = malloc(sizeof(binary_tree_t));
	if (rightnode == NULL)
	{
		return (NULL);
	}

	rightnode->parent = parent;
	rightnode->n = value;
	rightnode->left = NULL;
	rightnode->right = NULL;

	if (parent->right != NULL)
	{
		rightnode->right = parent->right;
		parent->right->parent = rightnode;
	}
	parent->right = rightnode;

	return (rightnode);
}
