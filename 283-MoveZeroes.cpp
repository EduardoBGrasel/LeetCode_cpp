class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int current = 0;
        int len = nums.size();
        for(int i = 0; i < len; i++) {
            if(nums[i] != 0) {
                nums[current] = nums[i];
                current++;
            }
        }
        while(current < len) {
            nums[current] = 0;
            current++;
        }
    }
};