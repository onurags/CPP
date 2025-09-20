class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> ans;
        if (!root) return ans;
        queue<Node*> q;
        q.push(root);
        
        
        while(!q.empty()){
            //curr element of first level
            ans.push_back(q.front()->data);
            int n = q.size();
            while(n--){
                Node *temp = q.front();
                q.pop();
                
                //left
                if(temp->left)
                q.push(temp->left);
                //right
                if(temp->right)
                q.push(temp->right);
            }
        }
        return ans;
        
    }
};
