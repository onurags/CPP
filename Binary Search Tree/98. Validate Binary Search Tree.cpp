class Solution {
public:
    bool helper(TreeNode* root, TreeNode* min, TreeNode* max){
        if(root == NULL) return true;
    
        if(min != NULL && root->val <= min->val){
            return false;
        }
        if(max != NULL && root->val >= max->val){
            return false;
        }

        return helper(root->left, min, root) && helper(root->right, root, max);
    }
    bool isValidBST(TreeNode* root) {
        return helper(root, NULL, NULL);
    }
};
