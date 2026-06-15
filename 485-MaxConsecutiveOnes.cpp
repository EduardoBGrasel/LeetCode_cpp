class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        nums.push_back(0);
        int total_max = 0;
        int current_max = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                current_max++;
            } else {
                if(current_max > total_max) {
                    total_max = current_max;
                }
                current_max = 0;
            }
        }
    return total_max;
    }
};