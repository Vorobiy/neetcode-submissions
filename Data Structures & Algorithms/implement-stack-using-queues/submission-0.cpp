class MyStack {
public:

    queue<int> left;
    queue<int> right;

    MyStack() {
        
    }
    
    void push(int x) {
        left.push(x);
    }
    
    int pop() {
        while(left.size() > 1){
            int temp = left.front();
            left.pop();
            right.push(temp);
        }

        int ans = left.front();
        left.pop();

        swap(left, right);
        return ans;
    }
    
    int top() {
        while(left.size() > 1){
            int temp = left.front();
            left.pop();
            right.push(temp);
        }
        int ans = left.front();  
        right.push(ans);         
        left.pop();

        swap(left, right);   
        return ans;
    }
    
    bool empty() {
        if(left.size() == 0 && right.size() == 0){
            return true;
        } else {
            return false;
        }
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