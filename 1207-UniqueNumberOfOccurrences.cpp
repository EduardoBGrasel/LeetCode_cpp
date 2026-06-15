class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> reps;
        unordered_set<int> values_ex;

        for(int x : arr) {
            reps[x]++;
        }

        for(const auto& [key, value] : reps) {
            values_ex.insert(value);
        }
    return values_ex.size() == reps.size();
    }
};