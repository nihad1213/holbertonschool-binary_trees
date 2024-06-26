#include "binary_trees.h"

/**
 * binary_tree_postorder - tree using post-order traversal
 * @tree: is a pointer to the root node pf the tree
 * to traverse
 * @func: is a pointer to a function to call for each node
 * Return: tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
