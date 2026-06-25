class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res;
        for(int i = 0; i < prices.size(); i++) {
            bool find = false;
            for(int j = i + 1; j < prices.size(); j++) {
                if(prices[j] <= prices[i] && find == false) {
                    res.push_back(prices[i] - prices[j]);
                    find = true;
                }
            }
            if(find == false) {
                res.push_back(prices[i]);
            }
        }
    return res;
    }
};