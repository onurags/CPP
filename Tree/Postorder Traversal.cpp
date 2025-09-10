class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    void post(Node *root, vector<int> &ans){
        if(root == NULL) return;
        
        // left
        post(root->left, ans);
        // right
        post(root->right, ans);
        // node
        ans.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        post(root, ans);
        return ans;
    }
};
