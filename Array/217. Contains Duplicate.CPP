class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for(int num : nums){
            if(temp.count(num)) return true;
            temp.insert(num);
        }
        return false;
    }
};
