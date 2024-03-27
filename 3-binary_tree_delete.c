#include "binary_trees.h"
/**
 * binary_tree_delete - parent node, insert to right :/
 * @tree:pointer to parent
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
