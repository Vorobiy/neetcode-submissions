class Solution {
public:
    bool isAnagram(string s, string t) {
        //anagram: when all letter frequencies match
        //1. populate two hashmaps with value being the frequency
        //2. if they're logically equal hashmaps, return true otherwise
        // false

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for(int i = 0; i < s.length(); i++){
            if(mp1.contains(s[i])){
                mp1[s[i]] = mp1[s[i]] + 1;
            } else {
                mp1.insert({s[i], 1});
            }
        }

        for(int i = 0; i < t.length(); i++){
            if(mp2.contains(t[i])){
                mp2[t[i]] = mp2[t[i]] + 1;
            } else {
                mp2.insert({t[i], 1});
            }
        }

        if(mp1 == mp2){
            return true;
        } else {
            return false;
        }
    }
};
