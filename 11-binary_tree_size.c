#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure size
 * Return: returns 0 or the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
