class MyStack {
public:
    queue<int>q;
    int above;
    MyStack() {
        above=0;
    }
    
    void push(int x) {
        q.push(x);
        above=x;
    }
    
    int pop() {
        int size = q.size();
        for(int i=1;i<size;i++){
            q.push(q.front());
            above=q.front();
            q.pop();
        }
       int num = q.front();
       q.pop();
       return num;
    }
    
    int top() {
        return above;
    }
    
    bool empty() {
      return q.empty();  
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */