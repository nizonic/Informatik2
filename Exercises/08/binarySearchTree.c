/****************************************************************************
 * University of Zurich, Informatics II, Spring Semester 2022               *
 * Exercise 8 - Task 2                                                      *
 *                                                                          *
 * @author Nico Manzoni                                                     *
 * @date 29.04.2022                                                         *
 ****************************************************************************/

#include <stdlib.h>
#include <stdio.h>

struct treeNode{
    int value;
    struct treeNode* left;
    struct treeNode* right;
};

/**
 *
 * @param root is the root of the tree
 * @param value is the value to be inserted into the tree
 * @var follower is the pointer one step before place
 * @var place is the spot where value is to be inserted
 * @return returns the root of the tree
 */
struct treeNode* insert(struct treeNode* root, int value){
    struct treeNode* follower = NULL;
    struct treeNode* place = root;
    while (place != NULL){
        follower = place;
        if (place->value < value){
            place = place->right;
        }
        else{
            place = place->left;
        }
    }
    if (follower == NULL){
        root->value = value;
    }
    else if(follower->value < value){
        follower->right->value = value;
    }
    else{
        follower->left->value = value;
    }
    return root;
}

struct treeNode* search(struct treeNode* root, int value){
    if (root == NULL || root->value == value){
        return root;
    }
    if (value < root->value){
        return search(root->left, value);
    }
    else{
        return search(root->right, value);
    }
}

struct treeNode* delete(struct treeNode* root, int value){
    struct treeNode* follower = NULL;
    struct treeNode* place = root;
    while (place->value != value){
        follower = place;
        if (value < place->value){
            place = place->left;
        }
        else{
            place = place->right;
        }
    }
    if (place->right == NULL){
        if (follower == NULL){
            root = place->left;
        }
        else if (follower->left == place){
            follower->left = place->left;
        }
        else{
            follower->right = place->left;
        }
    }
    else if (place->left == NULL){
        if (follower == NULL){
            root = place->right;
        }
        else if (follower->left == place){
            follower->left = place->right;
        }
        else{
            follower->right = place->right;
        }
    }
    else{
        struct treeNode* largestNodeLeft = place->left;
        struct treeNode* follower2 = largestNodeLeft;
        while (largestNodeLeft->right != NULL){
            follower2 = largestNodeLeft;
            largestNodeLeft = largestNodeLeft->right;
        }
        if (follower == NULL){
            root = largestNodeLeft;
        }
        else if (follower->left == place){
            follower->left = largestNodeLeft;
        }
        else{
            follower->right = largestNodeLeft;
        }
        largestNodeLeft->right = place->right;
        if (follower2 != largestNodeLeft){
            follower2->right = largestNodeLeft->left;
            largestNodeLeft->left = place->left;
        }
    }
    return root;
}

void printTree(struct treeNode *root){

}

int main(){
    return 0;
}