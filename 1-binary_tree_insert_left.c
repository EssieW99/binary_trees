#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent of the new node
 * @value: the value of of the node
 * Return: returns a pointer of the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
	{
		return (NULL);
	}

	leftnode->parent = parent;
	leftnode->n = value;
	leftnode->left = NULL;
	leftnode->right = NULL;

	if (parent->left != NULL)
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}
	parent->left = leftnode;

	return (leftnode);
}
