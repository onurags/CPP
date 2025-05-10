class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        // Count frequency of s1
        for (char c : s1) {
            freq1[c - 'a']++;
        }

        // Sliding window on s2
        for (int i = 0; i < s2.size(); i++) {
            freq2[s2[i] - 'a']++; 

            // Remove character left out of window
            if (i >= s1.size()) {
                freq2[s2[i - s1.size()] - 'a']--;
            }

            // Compare both frequency arrays
            if (equal(begin(freq1), end(freq1), begin(freq2))) {
                return true;
            }
        }

        return false;
    }
};
