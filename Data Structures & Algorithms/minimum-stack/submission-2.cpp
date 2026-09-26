class MinStack {
public:

    std::vector<int> stacke; 
        int count;
        std::vector<int> minElemArr;

    MinStack() {
        count = 0;
    }
    
    void push(int val) {
        stacke.push_back(val);

        if (minElemArr.empty()){
            minElemArr.push_back(val);
        } else {
            int minElem = std::min(minElemArr.back(), val);
            minElemArr.push_back(minElem);
   
            count++;
        }
       
    }
    
    void pop() {
    stacke.pop_back();
    minElemArr.pop_back();
    count--;
    }
    
    int top() {
        return stacke[stacke.size() -1];
    }
    
    int getMin() {
        return minElemArr[minElemArr.size()-1];
    }
};
