class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int current_sum = 0;
        for(int i = 0; i < k; i++) {
            current_sum += nums[i];
        }

        int max_sum = current_sum;

        for(int i = k; i < nums.size(); i++) {
            current_sum = current_sum + nums[i] - nums[i - k];
            if(current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    return (double)max_sum / k;
    }
};