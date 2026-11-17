#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashSetOfNums;
        bool duplicate = false;

        for(int i = 0; i < nums.size(); i++) {
            if(hashSetOfNums.count(nums[i])) { 
                duplicate = true; 
                break;
            }

            hashSetOfNums.insert(nums[i]);
        }

        return duplicate;
    }
};