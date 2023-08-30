#include"binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node.
*
* @parent: pointer to the node to insert the left-child in.
* @value: the value to store in the new node.
* Return: pointer to the created node, or NULL on failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);

	if (n_node == 0)
	{
		return (NULL);
	}
	if (parent->left != 0)
	{
		n_node->left = parent->left;
		parent->left->parent = n_node;
	}

	parent->left = n_node;

	return (n_node);
}
