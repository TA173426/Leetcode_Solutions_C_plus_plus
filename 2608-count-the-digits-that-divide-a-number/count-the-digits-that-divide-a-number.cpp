class Solution {
public:
    int countDigits(int num) {
        int digit = 0;
        int a = num,count=0;
        while(a!=0){
            int b = a%10;
            a/=10;
            if(num%b==0)count++;

        }
        return count;
    }
};