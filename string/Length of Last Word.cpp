class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, i = s.size()-1;

      //skip trailing spaces
        while(i>=0 && s[i] == ' ') {
            i--;
        }
      //count last word letters;
        while(i>=0 && s[i] != ' '){
            count++;
            i--;
        }
        return count;
    }
};
