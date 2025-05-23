class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0, end = s.length();

        while(start<end){
            if(!isalpha(s[start])) {
                start++;
            } else if(!isalpha(s[end])){
                end--;
            } else {
                swap(s[start], s[end]);
                start++;
                end--;
            }

        }
        return s;
    }
};
