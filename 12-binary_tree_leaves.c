#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the pointer to the root of the tree to count
 * Return: returns 0 or the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right, left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);

	return (right + left);
}
