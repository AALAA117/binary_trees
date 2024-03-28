#include "binary_trees.h"
/**
 * binary_tree_height - get height :/
 * @tree:pointer to root
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_count_l = 0;
	int height_count_r = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		height_count_l = binary_tree_height(tree->left);
		height_count_r = binary_tree_height(tree->right);
		if (height_count_l > height_count_r)
		{
			return (height_count_l + 1);
		}
		else
			return (height_count_r + 1);
	}
}
