class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int all_sum = 0;
        int left_sum = 0;
        for(auto num : nums) {
            all_sum += num;
        }

        for(int i = 0; i < nums.size(); i++) {
            if(left_sum == all_sum - left_sum - nums[i]) {
                return i;
            }
            left_sum += nums[i];
        }
    return -1;
    }
};