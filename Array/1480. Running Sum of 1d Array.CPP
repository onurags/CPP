class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum = 0;
        for(int a : nums){
            res.push_back(sum += a);
        }
        return res;
    }
};
