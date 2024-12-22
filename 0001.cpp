/* two sum
 *
 * input : nums = [2, 7, 11, 15], target = 9
 * output: [0, 1]
 * hint  : hash table
 */

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (map.count(target - nums[i]))
                return {i, map[target - nums[i]]};
            
            map[nums[i]] = i;
        }
        
        return {};
    }
};
