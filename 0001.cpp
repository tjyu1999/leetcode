/* 1. Two Sum
 *
 * Time:  O(n)
 * Space: O(n)
 */


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> numsMap;

        for (int i = 0; i < nums.size(); ++i) {
            const int diff = target - nums[i];
            if (numsMap.count(diff))
                return {numsMap[diff], i};

            numsMap[nums[i]] = i;
        }

        return {};
    }
};