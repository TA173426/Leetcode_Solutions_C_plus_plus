class Solution {
public:
    int minAddToMakeValid(string s) {
        if(s.size()==1)return 1;
        stack<char> t;
        for(int i =0;i<s.size();i++){
          if(t.empty()){t.push(s[i]);continue;}
          if(t.top()=='(' && s[i]==')')t.pop();
          else t.push(s[i]);
        }
        return t.size();
    }
};