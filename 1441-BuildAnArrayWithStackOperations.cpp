class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int targetIdx = 0;
        vector<string> result;
        for(int i = 1; i <= n; i++) {
            if(targetIdx >= target.size()) {
                break;
            }
            result.push_back("Push");

            if(target[targetIdx] == i) {
                targetIdx++;
            } else {
                result.push_back("Pop");
            }
        }
    return result;
    }
};