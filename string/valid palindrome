class Solution {
private:
    // Check if a character is alphanumeric
    bool valid(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    // Convert a character to lowercase
    char toLowerCase(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ch;
        }
        if (ch >= 'A' && ch <= 'Z') {
            return ch + 'a' - 'A';
        }
        return ch;  // For digits, return as is
    }

    // Check if a string is a palindrome
    bool checkPalindrome(const string& a) {
        int s = 0;
        int e = a.length() - 1;
        while (s <= e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(const string& s) {
        string temp = "";

        // Remove unwanted characters and convert to lowercase
        for (char ch : s) {
            if (valid(ch)) {
                temp.push_back(toLowerCase(ch));
            }
        }

        // Check if the processed string is a palindrome
        return checkPalindrome(temp);
    }
};
