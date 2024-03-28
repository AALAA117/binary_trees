#include "binary_trees.h"
/**
 * binary_tree_leaves - get no. of leaves :/
 * @tree:pointer to root
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;
	if (tree)
	{
		if (tree->left)
		{
			count++;
		}
		if(tree->right)
		{
			count++;
		}
	}
	return (count);
}
