class Solution {
public:
    bool isValid(string s) {
        const std::unordered_map<char, char> map = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        std::stack<char> stacke;

        for (int i = 0; i < s.length(); i++) {
            if (!map.contains(s[i])) {
                stacke.push(s[i]);
            } else {
                if (stacke.empty() || map.at(s[i]) != stacke.top()) {
                    return false;
                }

                stacke.pop();
            }
        }

        if (stacke.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
