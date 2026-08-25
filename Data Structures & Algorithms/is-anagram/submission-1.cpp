class Solution {
public:
    bool isAnagram(string s, string t) {
        //I will use an unordered map.
        unordered_map<char, int> hashmap1;
        unordered_map<char, int> hashmap2;

        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            if(hashmap1.contains(s[i])){
                hashmap1.insert({s[i], hashmap1[s[i]]++});
            } else {
                hashmap1.insert({s[i], 1});
            }
        }

        for(int i = 0; i < t.length(); i++){
            if(hashmap2.contains(t[i])){
                hashmap2.insert({t[i], hashmap2[t[i]]++});
            } else {
                hashmap2.insert({t[i], 1});
            }
        }

        if(hashmap1 == hashmap2){
            return true;
        } else {
            return false;
        }
    }
};
