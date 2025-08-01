class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        count = count/2;
        temp  = head;
        while(count--){
            temp = temp->next;
        }
        return temp;
    }
};
