class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string new_string = "";
        int i = 0; 
        int k = 0;  
        int len_word_1 = word1.length();
        int len_word_2 = word2.length();
        int total_len = len_word_1 + len_word_2;
        while(i + k < total_len){
            if (i < len_word_1) {
                new_string += word1[i];
                i += 1;
            }
            if (k < len_word_2) {
                new_string += word2[k];
                k += 1;
            }

        }
    return new_string;
    }
};