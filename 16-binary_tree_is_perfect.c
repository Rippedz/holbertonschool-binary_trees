#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height of.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t height_left, height_right;

        if (tree == NULL)
                return (0);

        height_left = binary_tree_height(tree->left);
        height_right = binary_tree_height(tree->right);

        return (1 + (height_left > height_right ? height_left : height_right));
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

        return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or not perfect - 0. Otherwise - 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        size_t height, size;

        if (tree == NULL)
                return (0);


        height = binary_tree_height(tree);
        size = binary_tree_size(tree);

        return (size == ((size_t)1 << height) - 1);
}
