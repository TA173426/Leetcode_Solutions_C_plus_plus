class Solution {
public:

    bool three(int n ){
        if(n==0)return 0;
        if(n==1)return 1;
        if(n%3!=0)return 0;
        n/=3;
       return three(n);
    }

    bool isPowerOfThree(int n) {
        if(n<=0)return 0;
        return three(n);
    }
};