#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of binary tree
 * @tree: pointer to root node
 * Return: Height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t rightHeight, leftHeight;
	
	rightHeight = binary_tree_height(tree->right);
	leftHeight = binary_tree_height(tree->left);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
	return (0);
}
