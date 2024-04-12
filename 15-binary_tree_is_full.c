#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or not full - 0. Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

        if (tree->left == NULL && tree->right == NULL)
                return (1);

        if (tree->left == NULL || tree->right == NULL)
                return (0);

        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
