class Solution {
  public:
 /*      bool detectLoop(Node* head) {
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
    } */
 bool detectLoop(Node* head) {
        Node *slow = head, *fast  = head;
        while(fast!=NULL && fast->next!=NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow) return true;
        }
        return false;
    }
  
};
