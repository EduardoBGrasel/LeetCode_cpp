class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_len = s.length();
        int current = 0;
        if(s_len == 0) {
            return true;
        }
        for(int i = 0; i < s_len; i++) {
            int ind = t.find(s[i], current);
            if(ind != std::string::npos) {
                current = ind + 1;
            } else {
                return false;
            }
        }
    return true;
    }
};