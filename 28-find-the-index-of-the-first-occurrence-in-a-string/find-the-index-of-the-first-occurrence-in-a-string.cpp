class Solution {
public:
    int strStr(string h, string n) {
        int first =0,second=0;
        int pre=0;int suf=1;
        vector<int>count(n.size(),0);
        while(suf<n.size()){
            if(n[pre]==n[suf]){
                count[suf]=pre+1;
                suf++;
                pre++;
            }
            else{
                if(pre==0){
                    count[suf]=0;
                    suf++;
                }
                else{
                    pre = count[pre-1];
                }
            }
        }
        while(first<h.size()){
            if(h[first]==n[second]){
                first++;
                second++;
            }
            else{
                if(second==0)first++;
                else second = count[second-1];
            }
            if(second==n.size())return first-second;
        }
        return -1;
    }
};