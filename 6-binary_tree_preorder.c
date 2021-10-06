#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses tree using preorder traversal
 * @tree: pointer to head of tree
 * @func: function pointer
 * Return: Void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
}
