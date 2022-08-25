#include "binary_trees.h"

/**
 * binary_tree_depth - calculate levels from parent
 * Description: This is a function that measures the depth
 * of a node in a binary tree
 * @node: node
 * Return: levels node is from parent
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node && (node->parent))
		return (1 + binary_tree_depth(node->parent));

	return (0);
}
