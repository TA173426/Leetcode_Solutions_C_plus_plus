class Solution {
public:
    string addStrings(string num1, string num2) {
        int a ,b,c=0;
        string result;
        while(!num1.empty() && !num2.empty()){
            a=num1.back()-'0';
            num1.pop_back();
            b= num2.back()-'0';
            num2.pop_back();
            result.insert(0,1,'0'+((a+b+c)%10));
            c=(a+b+c)/10;
        }
        if(!num1.empty()){
            while(c && !num1.empty()){
                a= num1.back()-'0';
                num1.pop_back();
                result.insert(0,1,'0'+((a+c)%10));
                c=(a+c)/10;
            }
            if(c)return '1'+result;
            return num1+result;
        }
        else if(!num2.empty()){
                while(c && !num2.empty()){
                a= num2.back()-'0';
                num2.pop_back();
                result.insert(0,1,'0'+((a+c)%10));
                c=(a+c)/10;
            }
            if(c)return '1'+result;
            return num2+result;
        }
        
            if(c)return to_string(c)+result;
            return result;
        
    }
};