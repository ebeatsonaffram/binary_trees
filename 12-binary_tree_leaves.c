#include "binary_trees.h"
/**
 * binary_tree_leaves - the func counts the leaves in a binary tree
 ** @tree: is a pointer to the root node of the tree
 ** Return: The number of leaves in the tree, if tree is NULL return 0
 ***********************************************************************/
size_t binary_tree_leaves(const binary_tree_t *tree)
{

if (!tree)
return (0);

if (!tree->left && !tree->right)
return (1);

return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
