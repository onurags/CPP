class Solution {
public:
    bool isBalanced(string num) {
        int even = 0, odd = 0;
        for(int i = 0; i<num.size(); i+=2){
            even += num[i] - '0';
        }
        for(int i = 1; i<num.size(); i+=2){
            odd += num[i] - '0';
        }

        if(even == odd) return true;
        else return false;
    }
};
