/* 3sum
 *
 * input : nums = [-1, 0, 1, 2, -1, -4]
 * output: [[-1, -1, 2], [-1, 0, 1]]
 */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        ranges::sort(nums);
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size() - 2; ++i) {
            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                const int sum = nums[i] + nums[l] + nums[r];
        
                if (sum == 0) {
                    ans.push_back({nums[i], nums[l++], nums[r]});
                    while (l < r && nums[l - 1] == nums[l])
                        ++l;
                    --r;
                }
                else if (sum < 0)
                    ++l;
                else
                    --r;
            }
        }

        return ans;
    }
};
