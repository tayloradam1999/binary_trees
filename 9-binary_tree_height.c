#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of binary tree
 * @tree: pointer to root node
 * Return: Height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		int leftHeight = 0, rightHeight = 0, max = 0;

		if (tree->left)
			leftHeight = binary_tree_height(tree->left);
		if (tree->right)
			rightHeight = binary_tree_height(tree->right);
		if (leftHeight > rightHeight)
		{
			max = leftHeight;
			return (max);
		}
		else
		{
			max = rightHeight;
			return (max);
		}
	}
}
