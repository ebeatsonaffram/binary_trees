#include "binary_trees.h"
/**
 * binary_tree_is_leaf - this checks if a node is a leaf
 ** @node: ptr to node
 ** Return:  1 if node is a leaf, otherwise 0. If node is NULL return 0
 ***********************************************************************/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);

if (!(node->right) && !(node->left))
return (1);

return (0);
}
