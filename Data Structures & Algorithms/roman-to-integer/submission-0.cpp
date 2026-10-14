class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        for(int i = s.length()-1; i >= 0; i--){
            switch(s[i]){
                case 'V':
                    if(i - 1 >= 0 && s[i-1] == 'I'){
                        result += 4;
                        i--;
                    } else {
                        result += 5;
                    }
                    continue;
                case 'X':
                    if(i - 1 >= 0 && s[i-1] == 'I'){
                        result += 9;
                        i--;
                    } else {
                        result += 10;
                    }
                    continue;
                case 'L':
                    if(i - 1 >= 0 && s[i-1] == 'X'){
                        result += 40;
                        i--;
                    } else {
                        result += 50;
                    }
                    continue;
                case 'C':
                    if(i - 1 >= 0 && s[i-1] == 'X'){
                        result += 90;
                        i--;
                    } else {
                        result += 100;
                    }
                    continue;
                case 'D':
                    if(i - 1 >= 0 && s[i-1] == 'C'){
                        result += 400;
                        i--;
                    } else {
                        result += 500;
                    }
                    continue;
                case 'M':
                    if(i - 1 >= 0 && s[i-1] == 'C'){
                        result += 900;
                        i--;
                    } else {
                        result += 1000;
                    }
                    continue;
                case 'I':
                    result += 1;
                    continue;
            }

        }
        return result;
    }
};