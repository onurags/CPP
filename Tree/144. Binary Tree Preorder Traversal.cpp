class Solution {
public:
    vector<int> preOrder(TreeNode* root, vector<int> &ans){
        if(root == NULL) return {};

        ans.push_back(root->val);
        preOrder(root->left, ans);
        preOrder(root->right, ans);
        return ans;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preOrder(root, ans);
        return ans;
    }
};
