#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: parent of node to create
 * Return: 0 if it's not full, 1 if it is
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