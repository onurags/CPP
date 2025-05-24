class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> res(26, 0);
        for(int i = 0; i<sentence.size(); i++){
            res[sentence[i] - 'a']++;
        }
        for(int i = 0; i<res.size(); i++){
            if(res[i] == 0) return false; 
        }
        return true;

    }
};
