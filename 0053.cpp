/* maximum subarray
 *
 * input : nums = [5, 4, -1, 7, 8]
 * output: 23
 * hint  : dynamic programming
 */

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int ans = INT_MIN;
        int sum = 0;
        
        for (auto n : nums) {
            sum = max(n, n + sum);
            ans = max(ans, sum);
        }
        
        return ans;
    }
};
