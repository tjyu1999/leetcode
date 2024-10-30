/* top k elements
 *
 * input : nums = [1, 1, 1, 2, 2, 3], k = 2
 * output: [1, 2]
 * hint  : unordered map, priority queue
 */

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        vector<int> ans;
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> pq;
        
        for (auto n : nums)
            ++map[n];
        for (auto it : map)
            pq.push({it.second, it.first});
        
        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};
