/* majority element
 *
 * input : nums = [3, 2, 3]
 * output: 3
 */

class Solution {
public:
    int majorityElement(vector<int> &nums) {
        int ans;
        int count = 0;

        for (auto n: nums) {
            if (count == 0)
                ans = n;

            // the majority number has authority to add count variable
            count += (n == ans) ? 1 : -1;
        }

        return ans;
    }
};
