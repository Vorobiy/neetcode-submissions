class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";

        for (string s : strs) {
            res += to_string(s.size()) + "#" + s;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int iter = 0;

        while (iter < s.size()) {

            // Read the length
            int len = 0;

            while (isdigit(s[iter])) {
                len = len * 10 + (s[iter] - '0');
                iter++;
            }

            // Skip '#'
            iter++;

            // Read the string
            string temp = "";

            for (int i = 0; i < len; i++) {
                temp += s[iter];
                iter++;
            }

            res.push_back(temp);
        }

        return res;
    }
};
