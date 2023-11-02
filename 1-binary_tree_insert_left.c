#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as a left-child in a new binary tree
 * @parent: A pointer to node to be inserted
 * @value: The new node value
 *
 * Return: NULL - If error occurs or if parent is NULL, else new node pointer
 *
 * Description: if the parent's left-child exits,
 *	the new node assume its position, and the older lift-child becomes
 *	the left-child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
