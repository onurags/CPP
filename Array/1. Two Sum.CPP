//brute force

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;

        for(int i = 0; i<nums.size()-1; i++){
            int first = nums[i];
            for(int j = i+1; j<nums.size(); j++){
                int second = nums[j];
                int add = first + second;
                if(add == target){
                    temp.push_back(i);
                    temp.push_back(j);
                }
            }
        }
        return temp;
    }
};
