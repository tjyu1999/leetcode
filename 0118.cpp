/* pascal's triangle
 * 
 * input : numRows = 5
 * output: [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1], [1, 4, 6, 4, 1]]
 * hint  : dynamic programming
 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        
        for (int i = 0; i < numRows; ++i) {
            ans[i].resize(i + 1, 1);
            
            for (int j = 1; j < i; ++j)
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
        
        return ans;
    }
};
