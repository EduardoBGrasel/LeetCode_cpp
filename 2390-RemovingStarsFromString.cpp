class Solution {
public:
    string removeStars(string s) {
        string stk;

        for(char c : s) {
            if(c == '*') {
                if(!stk.empty()) {
                    stk.pop_back();
                }
            } else {
                stk.push_back(c);
            }
        }
    return stk;
    }
};