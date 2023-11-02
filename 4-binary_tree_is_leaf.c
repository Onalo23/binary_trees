#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks for a leaf binary tree
 * @node: A pointer to the node
 *
 * Return: 1 - for leaf node, otherwise - 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
