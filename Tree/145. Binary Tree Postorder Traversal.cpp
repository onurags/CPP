class Solution {
public:
    vector<int> postOrder(TreeNode* root, vector<int> &temp){
        if(root == NULL) return {};

        postOrder(root->left, temp);
        postOrder(root->right, temp);
        temp.push_back(root->val);
        return temp;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> temp;
        postOrder(root, temp);
        return temp;
    }
};
