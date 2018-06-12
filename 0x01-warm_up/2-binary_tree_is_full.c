#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: parent of node to create
 * @value: value to insert in the binary tree
 * Return: pointer to new node or NULL on failure
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    int left, right;

    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (1);
    if (tree->left != NULL && tree->right == NULL)
        return (0);
    if (tree->left == NULL && tree->right != NULL)
        return (0);
    
    left = binary_tree_is_full(tree->left);
    right = binary_tree_is_full(tree->right);
    
    if (left == 0 || right == 0)
        return (0);
    else
        return (1);
}