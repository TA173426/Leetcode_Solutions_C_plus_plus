class Solution {
public:
    string sortVowels(string s) {
        if(s.size()==1)return s;
        set <char> ch={
        'a','e','i','o','u','A','E','I','O','U'
    };
    vector<int> num;
    for(int i=0;i<s.size();i++){
        if(ch.contains(s[i])){
            num.push_back(s[i]-'a');
        }
    }
    sort(num.begin(),num.end(),greater<int>());
    
    for(int i=0;i<s.size();i++){
        if(ch.contains(s[i])){
            s[i]='a'+num.back();
            num.pop_back();
        }
    }
    return s;
    }
};