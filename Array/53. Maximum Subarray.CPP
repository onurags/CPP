//Brute force
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        for(int st = 0; st<n; st++){
            int currSum = 0;
            for(int end=st; end<n; end++){
                currSum += nums[end];
                maxSum = max(currSum, maxSum);
            }
        }
        return maxSum;
    }
};

// Kadane's Algorithm


