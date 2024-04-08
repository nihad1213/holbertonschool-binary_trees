#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of node in
 * a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
        unsigned int depth = 0;
        binary_tree_t *currentNode;

        currentNode = tree->parent;

        if (tree == NULL)
                return (0);

        while(currentNode)
        {
                depth++;
                currentNode = currentNode->parent;
        }

        return (depth);
}
