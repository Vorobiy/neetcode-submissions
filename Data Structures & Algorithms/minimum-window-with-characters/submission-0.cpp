class Solution {
public:
    string minWindow(string s, string t) {
        //sliding window problem
        //initialize two hashmaps, one for t one for s

        //edge case:
        if(t == ""){
            return "";
        }

        unordered_map<char, int> countT;
        unordered_map<char, int> window;

        for(int i = 0; i < t.length(); i++){
            countT[t[i]] = 1 + countT[t[i]];
        }

        int have = 0;
        int need = countT.size();

        vector<int> res = {-1, -1};
        int resLen = INT_MAX;

        int l = 0;
        for(int r = 0; r < s.length(); r++){
            char c = s[r];
            window[c] = 1 + window[c];

            if (countT.count(c) && window[c] == countT[c]){
                have += 1;
            }

            while(have == need){
                if(r - l + 1 < resLen){
                    res = {l, r};
                    resLen = r - l + 1;
                }

                window[s[l]] -= 1;
                if(countT.count(s[l]) && window[s[l]] < countT[s[l]]){
                    have -= 1;
                }
                l++;

            }
        }

        if(resLen != INT_MAX){
            return s.substr(res[0], resLen);
        } else {
            return "";
        }
    }
};
