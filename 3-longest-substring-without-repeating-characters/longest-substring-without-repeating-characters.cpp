class Solution {
public:
int lengthOfLongestSubstring(string s) {
    if (s.empty()) return 0;

    set<char> ch;
    int first = 0, second = 0; 
    int maxi = 0;

    while (second < s.size()) {
        if (ch.find(s[second]) == ch.end()) {
            ch.insert(s[second]);
            maxi = max(maxi, second - first + 1); 
            second++;
        } 
        else {
            ch.erase(s[first]);
            first++;
        }
    }
    return maxi;
}
};