class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        //check frequency of each character in string
        for(char c : s){
            freq[c]++;
        }

        //find first unique character
        for(int i = 0; i<s.size(); i++){
            if(freq[s[i]] == 1){
                return i;
            }
        }

        return -1;
    }
};
