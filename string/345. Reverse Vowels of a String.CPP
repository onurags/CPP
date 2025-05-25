class Solution {
public:
    string reverseVowels(string s) {
    unordered_set<char> vow = {'a','e','i','o','u','A','E','I','O','U'};

        int left = 0, right = s.length()-1;

        while(left<right){

            while(left<right && vow.find(s[left]) == vow.end()){
                left++;
            }
            while(left<right && vow.find(s[right]) == vow.end()){
                right--;
            }           
            swap(s[left], s[right]);
            left++;
            right--; 
        }
        return s;

    }
};
