class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> seen1;
        std::unordered_map<char, int> seen2;

        //populate seen1
        for(int i = 0; i < s.size(); i++){
            if(seen1[s[i]]){
                seen1[s[i]] += 1;
            }
            else {
                seen1[s[i]] = 1;
            }
        }

        //populate seen2
        for(int i = 0; i < t.size(); i++){
            if(seen2[t[i]]){
                seen2[t[i]] += 1;
            }
            else {
                seen2[t[i]] = 1;
            }
        }

        //compare the two hashmaps:
        if(seen1 == seen2){
            return true;
        } else {
            return false;
        }
    }
};
