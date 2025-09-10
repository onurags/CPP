class Solution {
  public:
    void pre(Node *root, vector<int> &ans){
        if(root == NULL) return;
        // Node
        ans.push_back(root->data);
        //left
        pre(root->left, ans);
        //right
        pre(root->right, ans);
        
  }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        pre(root, ans);
        return ans;
        
    }
};
