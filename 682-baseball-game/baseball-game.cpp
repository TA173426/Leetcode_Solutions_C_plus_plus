class Solution {
public:
    void d(stack<int>&s){
        int num = s.top()*2;
        s.push(num);
    }

    void plus(stack<int>&s){
        int first = s.top();
        s.pop();
        int second = s.top()+first;
        s.push(first);
        s.push(second); 
    }

    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum =0;
        for(int i =0;i<operations.size();i++){
            if(operations[i]=="C")st.pop();
            else if(operations[i]=="D")d(st);
            else if(operations[i]=="+")plus(st);
            else {
                st.push(stoi(operations[i]));
            }
        }
        if(!st.empty()){
            while(!st.empty()){
                sum+=st.top();
                st.pop();
            }
        }
        return sum;
    }
};