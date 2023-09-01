#include "binary_trees.h"
/**
* binary_tree_depth - measures the dep of a node in a binary tree.
*
* @tree: pointer to the node to measure the dep.
* Return: If tree is NULL, your function must return 0.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (!tree)
	{
		return (0);
	}

	while (tree->parent)
	{
		dep++;
		tree = tree->parent;
	}

	return (dep);
}
