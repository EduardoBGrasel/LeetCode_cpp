class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> words;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        if(!word.empty()) {
            words.push_back(word);
        }
        word = "";
        for(int i = words.size() - 1; i > -1; i--) {
            word += words[i];
            word += ' ';
        }
        word.pop_back();
    return word;
    } 
};