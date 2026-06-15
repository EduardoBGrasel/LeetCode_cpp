class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for(int ast : asteroids) {
            bool destroy = false;

            while(!res.empty() && ast < 0 && res.back() > 0) {
                if(res.back() < abs(ast)) {
                    res.pop_back();
                    continue;
                }
                else if(res.back() == abs(ast)) {
                    res.pop_back();
                }
                destroy = true;
                break;
            }
        if(!destroy) {
            res.push_back(ast);
        }
        }
    return res;
    }
};