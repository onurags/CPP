class Solution {
public:
    bool isIdentical(TreeNode* p, TreeNode* q){
        if(p == NULL || q == NULL){
            return p == q;
        }
        bool left = isIdentical(p->left, q->left);
        bool right = isIdentical(p->right, q->right);

        return left && right && p->val == q->val;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL){
            return root == subRoot;
        }

        if(root->val == subRoot->val && isIdentical(root, subRoot)) return true;

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
