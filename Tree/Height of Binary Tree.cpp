class Solution {
  public:
    int height(Node* node) {
        if(node == NULL) return -1;

        
        return 1 + max(height(node->left), height(node->right));
        
    }
};
