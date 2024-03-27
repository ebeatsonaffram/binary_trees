#include "binary_trees.h"
/**
 * binary_tree_height - It measures the height of a binary tree
 ** @tree: binary tree
 ** Return: height
 ************************************************************/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t right = 0;
size_t left = 0;

if (!tree)
return (0);

if (tree->right)
right = 1 + binary_tree_height(tree->right);
if (tree->left)
left = 1 + binary_tree_height(tree->left);

return ((left > right) ? left : right);
}
