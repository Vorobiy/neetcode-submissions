class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stacke;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/") {

                stacke.push(stoi(tokens[i]));
            }
            else {
                int secondVal = stacke.top();
                stacke.pop();

                int firstVal = stacke.top();
                stacke.pop();

                if (tokens[i] == "+") {
                    stacke.push(firstVal + secondVal);
                }
                if (tokens[i] == "-") {
                    stacke.push(firstVal - secondVal);
                }
                if (tokens[i] == "*") {
                    stacke.push(firstVal * secondVal);
                }
                if (tokens[i] == "/") {
                    stacke.push(firstVal / secondVal);
                }
            }
        }

        return stacke.top();
    }
};
