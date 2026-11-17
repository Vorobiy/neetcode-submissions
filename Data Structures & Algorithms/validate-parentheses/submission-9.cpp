class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {
            {'}','{'}, 
            {')','('},
            {']','['}};

        for(int i = 0; i < s.length(); i++){
            if(!mp.contains(s[i])){
                st.push(s[i]);
            } else {
                if(st.empty() || st.top() != mp[s[i]]){
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};
