class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void in(Node *root, vector<int> &ans){
        if(root == NULL) return;
        
        //left
        in(root->left, ans);
        //Node
        ans.push_back(root->data);
        //right
        in(root->right, ans);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        in(root, ans);
        return ans;
    }
};
