class Solution {
public:
    bool isValid(string s) {
        //1. we create a map that maps closing parentheses to opening parentheses
        map<char, char> bracket = { {'}','{'}, {')','('}, {']','['} };

        //2. we create a stack to keep track of what's been seen
        stack<char> tracker;

        for(int i = 0; i < s.size(); i++){
            if(bracket.count(s[i])){
                if(!tracker.empty() && bracket.at(s[i]) == tracker.top()){
                tracker.pop();
                continue;
                } else {
                    return false;
                }
            }
             else {
                tracker.push(s[i]);
            }
        }

        if(tracker.empty()){
            return true;
        } else {
            return false;
        }
    }
};