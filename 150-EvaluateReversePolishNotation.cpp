class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(const string& t : tokens) {
            if(t == "+" || t == "-" || t == "*" || t == "/") {
                int opB = s.top();
                s.pop();
                int opA = s.top();
                s.pop();

                if(t == "+") {
                    s.push(opA + opB);
                } else if(t == "-") {
                    s.push(opA - opB);
                } else if(t == "*") {
                    s.push(opA * opB);
                } else if(t == "/") {
                    s.push(opA / opB);
                }
            } else {
                s.push(stoi(t));
            }
        }
        return s.top();
    }
};