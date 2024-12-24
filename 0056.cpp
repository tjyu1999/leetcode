/* merge intervals
 *
 * input : intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
 * output: [[1, 6], [8, 10], [15, 18]]
 */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        vector<vector<int>> ans;
        ranges::sort(intervals);
        
        for (vector<int> &interval : intervals) {
            if (ans.empty() || ans.back()[1] < interval[0])
                ans.push_back(interval);
            else
                ans.back()[1] = max(ans.back()[1], interval[1]);
        }
        
        return ans;
    }
};
