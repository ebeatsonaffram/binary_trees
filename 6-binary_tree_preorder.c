#include "binary_trees.h"
/**
 * binary_tree_preorder - this structure goes through a binary tree
 ** @tree: pointer to the root node
 ** @func: is a ptr to a function
 ****************************************************/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
binary_tree_preorder(tree->right, func);
binary_tree_preorder(tree->left, func);
}
