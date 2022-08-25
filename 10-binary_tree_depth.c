#include "binary_trees.h"

/**
 * binary_tree_depth - calculate levels from parent
 * 
 * Description: This is a function that measures the depth
 * of a node in a binary tree
 * 
 * @node: node
 * Return: levels node is from parent
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
		return (depth);

	for (; tree->parent != NULL; depth++)
		tree = tree->parent;
	return (depth);
}
