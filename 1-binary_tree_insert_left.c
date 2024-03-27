#include "binary_trees.h"
/**
 * binary_tree_insert_left - parent node, insert to left :/
 * @parent:pointer to parent
 * @value:..
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent->parent != NULL)
	{
		if (parent->left != NULL)
		{
			node->parent = parent->left;
		}
		else
		{
			node->parent = parent;
			parent->left = node;
		}
	}
	else
	{
		node->parent = parent;
		if (parent->left != NULL)
		{
			parent->left->parent = node;
			node->left = parent->left;
			parent->left = node;
		}
		else
		{
			parent->left = node;
		}
	}
	return (node);

}
