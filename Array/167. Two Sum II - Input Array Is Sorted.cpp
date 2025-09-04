class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> ans;
        int st = 0, end = n-1;
        while(st<end){
            if(arr[st] + arr[end] == target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }else if(arr[st] + arr[end] < target){
                st++;
            }else {
                end--;
            }
        }
        return ans;
    }
};
