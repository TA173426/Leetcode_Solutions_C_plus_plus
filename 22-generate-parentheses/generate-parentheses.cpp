class Solution {
public:

    void generate(vector<string>& ans,string &s ,int n,int l=1,int r=0){
     if(r>l)return;
     if(r==n && l==n){
        ans.push_back(s);
        return ;
     }
      if(l!=n){
        s.push_back('(');
        generate(ans,s,n,l+1,r);
        s.pop_back();
      }
      if(r!=n){
        s.push_back(')');
        generate(ans,s,n,l,r+1);
        s.pop_back();
      }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s = "(";
       
        generate(ans,s,n);
        return ans;
    }
};