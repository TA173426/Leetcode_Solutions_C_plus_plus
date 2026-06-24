class Solution {
public:
   bool backspaceCompare(string s, string t) {
        char arr_s[200];
        char arr_t[200];
        int count1 = 0,count2=0;
        int k =0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='#'){
                if(k==0)continue;
                count1--;
                k--;
                continue;
            }
            arr_s[k++]=s[i];
            count1++;
        }
        k=0;
        for(int i =0;i<t.size();i++){
              if(t[i]=='#'){
                if(k==0)continue;
                k--;
                count2--;
                continue;
            }
            arr_t[k++]=t[i];
            count2++;
        }
        if(count1!=count2)return 0;
        for(int i=0;i<count1;i++){
            if(arr_s[i]!=arr_t[i])return 0;
        }
        return 1;
    }
};