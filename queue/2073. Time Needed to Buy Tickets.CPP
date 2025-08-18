class Solution {
public:
    int timeRequiredToBuy(vector<int>& Tickets, int k) {
        queue<int> q;
        int n = Tickets.size();
        for(int i = 0; i<n; i++)
        q.push(i);

        int Time = 0;
        while(Tickets[k]!=0){
            Tickets[q.front()]--;
            if(Tickets[q.front()])
            q.push(q.front());
            q.pop();
            Time++;
        }
        return Time;
        
    }
};
