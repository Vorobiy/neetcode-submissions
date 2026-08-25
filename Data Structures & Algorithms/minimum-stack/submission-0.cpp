class MinStack {
public:

    std::vector<int> stacking;
    std::vector<int> minTracker;

    MinStack() {}
    
    void push(int val) {
        stacking.push_back(val);

        if(minTracker.empty() || minTracker.back() >= val){
            minTracker.push_back(val);
        }
    }
    
    void pop() {
        if(!minTracker.empty() && minTracker.back() == stacking.back()){
            minTracker.pop_back();
        }

        stacking.pop_back();
    }
    
    int top() {
        return stacking.back();
    }
    
    int getMin() {
        return minTracker.back();
    }
};
