#include "binary_trees.h"
/**
* binary_tree_balance - measures the balance factor of a binary tree.
*
* @tree:pointer to the root node of the tree to measure the balance factor.
* Return: If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_Height = 0, r_Height = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
	l_Height = binary_tree_height(tree->left);
	r_Height = binary_tree_height(tree->right);
	return (l_Height - r_Height);
	}

}

/**
* binary_tree_height -  measures the height of a binary tree.
*
* @tree: pointer to the root node of the tree to measure the height..
* Return: If tree is NULL, your function must return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_Height = 0, r_Height = 0;

	if (tree)
	{
		l_Height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_Height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((l_Height > r_Height) ? l_Height : r_Height);
	}

	return (0);
}
