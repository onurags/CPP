class Solution {
  public:
        bool detectLoop(Node* head) {
        Node *curr = head; 
        unordered_map<Node*, bool>visited;
        
        while(curr){
            if(visited[curr] == 1){
                return true;
            }
            visited[curr] = 1;
            curr=curr->next;
            
        }
        return false;
    }
};
