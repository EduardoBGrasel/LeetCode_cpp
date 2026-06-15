class Solution {
public:
    string reverseVowels(string s) {
        string targets = "AaEeIiOoUu";
        int j = s.length() - 1;
        for(int i = 0; i < s.length(); i++) {
            char test1 = s[i];
            if(targets.find(test1) != string::npos) {
                int saved_i = i;
                while(i < j) {
                    if(targets.find(s[j])!= string::npos) {
                        char test2 = s[j];
                        s[i] = test2;
                        s[j] = test1;
                        j = j - 1;
                        break;
                    }
                    j = j - 1;
                }
            }
        }
    return s;
    }
};