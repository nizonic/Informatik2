struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

void inorder(struct TreeNode* root){
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->val);
        inorder(root->right);
    }
}