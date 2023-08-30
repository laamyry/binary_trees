#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right-child of another node.
*
* @parent: pointer to the node to insert the right-child in.
* @value: the value to store in the new node.
* Return: return a pointer to the created node,
* or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
	{
		return (NULL);
	}
	n_node = binary_tree_node(parent, value);
	if (!n_node)
	{
		return (NULL);
	}
	if (parent->right)
	{
		n_node->right = parent->right;
		parent->left = n_node;
	}
	parent->right = n_node;
	return (n_node);
}
