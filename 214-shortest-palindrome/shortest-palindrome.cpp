class Solution {
public:
    string shortestPalindrome(string s) {
    if(s.size()<=1)return s;
    int size = s.size()/2;
    vector<int>count(size,0);
    int first =0;int second =1;
    while(second<size){
        if(s[first]==s[second]){
            count[second]=first+1;
            first++;
            second++;
        }
        else{
            if(first==0)second++;
            else first = count[first-1];
        }
    }
    first =0;second=s.size();
    
    while(first<second){
        if(s[first]==s[second]){
            first++;
            second--;
        }
        else{
            if(first==0)second--;
            else first = count[first-1];
        }
    }
    size = s.size()-1-first-second;
    string s1 ="";
    for(int i =s.size()-1;i>s.size()-size-1;i-- ){
        s1.push_back(s[i]);
    }
    return s1+s;
    }
};