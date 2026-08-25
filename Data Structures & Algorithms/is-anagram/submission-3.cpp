class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> seen_s;
        unordered_map<char, int> seen_t;


        for(int i = 0; i < s.size(); i++){
            if(!seen_s.contains(s[i])){
                seen_s.insert({s[i], 1});
            } else {
                seen_s[s[i]]++;
            }
        }

        for(int i = 0; i < t.size(); i++){
            if(!seen_t.contains(t[i])){
                seen_t.insert({t[i], 1});
            } else {
                seen_t[t[i]]++;
            }
        }

        if(seen_s == seen_t){
            return true;
        } else {
            return false;
        }
    }
};
