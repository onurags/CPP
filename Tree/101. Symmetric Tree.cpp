class Solution {
public:
    bool mirror(TreeNode* left, TreeNode* right){
        if(!left && !right) return 1;
        if(!left || !right) return 0;
        if(left->val != right->val) return 0;

        return (mirror(left->left, right->right) && mirror(left->right, right->left));
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return 1;

        return mirror(root->left, root->right);
    }
};
