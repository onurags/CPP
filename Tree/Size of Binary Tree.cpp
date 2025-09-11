class Solution {
  public:
    void total(Node *root, int &count) {
        if(root == NULL) return;
        
        count++;
        total(root->left, count);
        total(root->right, count);
    }
    int getSize(Node* root) {
        
        int count = 0;
        total(root, count);
        return count;
    }
};
