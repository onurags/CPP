class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node *slow = head, *fast = head;
        while(fast&&fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow){
                int count = 1;
                slow = slow->next;
                while(slow!=fast){
                    count++;
                    slow = slow->next;
                }
                return count;
            }
        }
        return 0;
        
    }
};
