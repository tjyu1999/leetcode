class Solution {
public:
    int climbStairs(int n) {
        int prev = 1;
        int curr = 1;

        for (int i = 2; i <= n; ++i) {
            const int temp = prev;
            prev = curr;
            curr += temp; 
        }

        return curr;
    }
};

// dynamic programming
// starting from 2nd stair is faster
