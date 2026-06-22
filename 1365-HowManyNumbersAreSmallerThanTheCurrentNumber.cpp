class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        vector<int> order_nums = nums;
        vector<int> result(size);
        sort(order_nums.begin(), order_nums.end());

        unordered_map<int, int> NumToIndex;

        for(int i = 0; i < size; i++) {
            if(NumToIndex.find(order_nums[i]) == NumToIndex.end()) {
                NumToIndex[order_nums[i]] = i; 
            }
        }
        for(int i = 0; i < size; i++) {
            result[i] = NumToIndex[nums[i]];
        }
    return result;
    }
};