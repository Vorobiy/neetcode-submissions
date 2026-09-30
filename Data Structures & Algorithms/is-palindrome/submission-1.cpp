class Solution {
public:
    bool isPalindrome(string s) {
        int p1 = 0;
        int p2 = s.length() - 1;

        while(p1 <= p2){
            if(s[p1] == ' ' || ! std::isalnum(s[p1])){
                p1++;
                continue;
            } if (s[p2] == ' ' || ! std::isalnum(s[p2])){
                p2--;
                continue;
            } else {
                if(tolower(s[p1]) == tolower(s[p2])){
                    p1++;
                    p2--;
                    
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
