#include "binary_trees.h"
/**
 * binary_tree_postorder - this function goes through a binary tree
 ** @tree: ptr to the root node of the tree to traverse
 ** @func: is a pointer to a function to call for each node.
 ***************************************************************/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_postorder(tree->right, func);
binary_tree_postorder(tree->left, func);
func(tree->n);
}
