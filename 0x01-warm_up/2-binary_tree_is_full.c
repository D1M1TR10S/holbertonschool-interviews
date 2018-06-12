#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: parent of node to create
 * @value: value to insert in the binary tree
 * Return: pointer to new node or NULL on failure
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree != NULL)
    {
        if ((tree->left == NULL && tree->right == NULL)
        {
            return(1);
        }
        else if (tree->left != NULL && tree->right != NULL))
        {
            return(1);
        }
    }
    return(0);
}