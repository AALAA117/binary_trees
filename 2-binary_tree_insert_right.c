#include "binary_trees.h"
/**
 * binary_tree_insert_right - parent node, insert to right :/
 * @parent:pointer to parent
 * @value:..
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
		if (parent->right != NULL)
		{
			node->parent = parent->right;
		}
		else
		{
			node->parent = parent;
			parent->right = node;
		}
	}
	else
	{
		node->parent = parent;
		if (parent->right != NULL)
		{
			parent->right->parent = node;
			node->right = parent->right;
			parent->right = node;
		}
		else
		{
			parent->right = node;
		}
	}
	return (node);

}
