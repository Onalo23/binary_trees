#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert the right-child of new a binary tree
 * @parent: A pointer to the right-child node to be inserted
 * @value: The value to be stored in the new node
 *
 * Return: NULL - If the parent node is NULL or error occurs
 *		else a pointer to the new node
 *
 * Description: if the parent's left-child exits,
 *      the new node assume its position, and the older lift-child becomes
 *      the left-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
