class Solution {
public:
    int calculate(string s) {

        //strip ' ' characters
        s.erase(std::remove(s.begin(), s.end(), ' '), s.end());

        //create new stack of type int
        vector<int> stack;
        int num = 0;
        char op = '+';

        
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            //conversion of char to int using ASCII
            if(isdigit(ch)){
                num = num * 10 + (ch - '0');
            }
            //check if current iteration is not a digit or the end of the iteration:
            if(!isdigit(ch) || i == s.size() -1){
                if(op == '+'){
                    stack.push_back(num);
                } else if (op == '-'){
                    stack.push_back(-num);
                } else if (op == '*'){
                    int prev = stack.back(); stack.pop_back();
                    stack.push_back(prev * num);
                } else {
                    int prev = stack.back(); stack.pop_back();
                    stack.push_back(prev / num);
                }
                op = ch;
                num = 0;
            }
        }

        int res = 0;
        for (int x = 0; x < stack.size(); x++){
            res += stack[x];
        }
        return res;
    }
};