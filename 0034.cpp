class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int> ans;
        
        int l = binarySearch(nums, target, true);
        int r = binarySearch(nums, target, false);
        ans.push_back(l);
        ans.push_back(r);
        
        return ans;
    }

private:
    int binarySearch(vector<int> &nums, int target, bool isLeft) {
        int idx = -1;
        int l = 0;
        int r = nums.size() - 1;
        
        while (l <= r) {
            int mid = l + (r - l) / 2;
            
            if (nums[mid] > target)
                r = mid - 1;
            else if (nums[mid] < target)
                l = mid + 1;
            else {
                idx = mid;
                
                if (isLeft)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        
        return idx;
    }
};
