#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse binary tree using pre-order traversal
 *
 * @tree: pointer to root of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: nothing!
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
