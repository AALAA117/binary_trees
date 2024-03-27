#include "binary_trees.h"
/**
 * binary_tree_preorder - preorder traverse :/
 * @tree:pointer to root
 * @func: pointer to func
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *l = tree;
	const binary_tree_t *r = tree;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	while (l != NULL)
	{
		(*func)(l->n);
		l = l->left;
	}
	while (r != NULL)
	{
		(*func)(r->n);
		r = r->right;
	}
}
