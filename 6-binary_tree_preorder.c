#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - that goes through a binary
 * tree using pre-order traversal
 * @tree: a pointer to the root node of the
 * three to traverse
 * @func: is a pointer to a function to call for
 * each node
 * Return: if tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
}
