#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 * Return: O or the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left = binary_tree_heights(tree->left);
	right = binary_tree_heights(tree->right);

	return (left - right);
}

/**
 * binary_tree_heights - calculates height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 or the height
 */
size_t binary_tree_heights(const binary_tree_t *tree)
{
	size_t left_height, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_heights(tree->left);
	right_height = binary_tree_heights(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
