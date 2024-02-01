#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: the pointer to the node to check
 * Return: returns 1 if true or 0 if false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
		return (0);
}
