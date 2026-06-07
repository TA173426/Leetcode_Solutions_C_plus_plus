class Solution {
public:
    int longestPalindrome(string s) {
        if (s.size() <= 1) return s.size();
        sort(s.begin(), s.end());
        int num = 0;
        int count = 1;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                count++;
            } else {
                num += (count / 2) * 2;
                count = 1;
            }
        }
        num += (count / 2) * 2;
        if (num < s.size()) {
            num += 1;
        }
        return num;
    }
};