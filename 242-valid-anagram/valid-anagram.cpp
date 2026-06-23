class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<int,int>st;
        for(int i = 0 ;i<s.size();i++){
            st[s[i]-'a']++;
            st[t[i]-'a']--;
        }
        for(auto a :st){
            if(a.second!=0)return false;
        }
        return true;

    }
};