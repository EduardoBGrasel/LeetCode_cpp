#include <algorithm>

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int next = 0;
        if (n == 0) return true;
        if (flowerbed.size() == 1 && flowerbed[0] == 0 && n == 1) return true;
        int current = 0;
        int before = 1;
        int n_place = 0;

        for(int i = 0; i < flowerbed.size() - 1; i++) {
            next = flowerbed[i + 1];
            if (i >= 1) {
                before = flowerbed[i - 1];
            }
            current = flowerbed[i];
            if(i == 0) {
                if(current == 0 && next == 0) {
                    n_place+=1;
                    flowerbed[i] = 1;
                }
            }
            else if(i == flowerbed.size() - 2) {
                if(current == 0 && next == 0) {
                    n_place+=1;
                    flowerbed[i + 1] = 1;
                }
            }
            else if(current == 0 && next == 0 && before == 0) {
                flowerbed[i] = 1;
                n_place+=1;
            }
            if(n_place == n) {
                return true;
            }
        }
    return false;
    }
};