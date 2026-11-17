#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool duplicate = false;

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1]) { duplicate = true; break; }
        }

        return duplicate;
    }
};