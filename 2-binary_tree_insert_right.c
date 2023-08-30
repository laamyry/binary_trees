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

	if (parent == 0)
	{
		return (NULL);
	}
}
