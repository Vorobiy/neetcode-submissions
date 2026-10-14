class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mapping = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };        

        int result = 0;

        for(int i = 0; i < s.length(); i++){
            if(i + 1 < s.length() && mapping.at(s[i+1]) >  mapping.at(s[i])){
                result += -(mapping.at(s[i]));
            } else {
                result += mapping.at(s[i]);
            }
        }

        return result;
    }
};