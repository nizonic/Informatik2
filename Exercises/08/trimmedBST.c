/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 8 - Task 4                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 01.05.2022                                                         *
 ****************************************************************************/

#include <stdlib.h>

struct treeNode{
    int value;
    struct treeNode* left;
    struct treeNode* right;
};

struct treeNode* trimBST(struct treeNode* root, int low, int high){
    if (root == NULL){
        return NULL;
    }
    if (root->value > high){
        return trimBST(root->left, low, high);
    }
    if (root->value < low){
        return trimBST(root->right, low, high);
    }
    root->left = trimBST(root->left, low, high);
    root->right = trimBST(root->right, low, high);
    return root;
}