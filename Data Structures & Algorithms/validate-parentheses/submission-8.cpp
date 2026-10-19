class Solution {
public:
    bool isValid(string s) {
        //input: a string of different types of braces
        //output, a boolean, which indicates whether all brackets in string is
        //valid or not.
        
        //algorithm: use hashmap to store the defenitions for how each brace 
        //matches another.
        //for every iteration, check if the current iteration is in the map. if its 
        // not, push it to a stack. if it is, check to see if the current top of 
        // stack matches the key.
        // if it does match the key, then pop from stack and keep going. if it doesnt return false.

        stack<int> st;
        unordered_map<int, int> hm;
        hm.insert({'}', '{'});
        hm.insert({']', '['});
        hm.insert({')', '('});

        for(int i = 0; i < s.length(); i++){
            if(!hm.contains(s[i])){
                st.push(s[i]);
            } else {
                if(!st.empty() && hm.at(s[i]) == st.top()){
                    st.pop();
                    continue;
                } else {
                    return false;
                }
            }
        }

        if(st.empty()){
            return true;
        } else {
            return false;
        }
    }
};
