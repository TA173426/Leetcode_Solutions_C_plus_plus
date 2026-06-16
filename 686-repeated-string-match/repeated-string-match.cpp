class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int size1 = a.size();
        int size2 = b.size();
        int times = (size2/size1)+2;
        int first = 0, second = 1;
        vector<int>lps(b.size(),0);
        while(second<b.size()){
            if(b[first]==b[second]){
                lps[second]=first+1;
                first++;
                second++;
            }
            else{
                if(first ==0)second++;
                else first = lps[first-1];
            }
        }
        int count = 0;
        int ans = 0;
        first =0;
        second = 0;
        while(times!=0 && second<b.size()){
            if(a[first]==b[second]){
            count++;
            first ++;
            second++;
           }
            else{
                
                if(second==0){first++;count=0;}

                else {
                    count = count - (second-lps[second-1]);
                    second = lps[second-1];}

            }
            if(first==a.size()){
                first%=a.size();
                times--;
                ans ++;
            }
            if(count==b.size()){
                if(first!=0)ans++;
                return ans;
            }; 
        }
        return -1;
    }
};