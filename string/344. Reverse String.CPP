class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int en = s.size() - 1;

        while(st < en){
            swap(s[st++], s[en--]);
        }
    }
};


//Second Approach
class Solution {
public:
    void reverseString(vector<char>& s) {
        string rev = "";
        for(int i = s.size() -1; i>=0; i--){
            rev += s[i];
        }
        for(int i = 0; i<s.size(); i++){
            s[i] = rev[i];
        }
    }
};
