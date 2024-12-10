/* search a 2D array
 *
 * input : matrix = [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]], target = 3
 * output: true
 * hint  : binary search
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        if (matrix.empty())
            return false;
        
        const int n= matrix.size();
        const int m = matrix[0].size();
        int l = 0;
        int r = n * m;
        int mid;
        
        while (l < r) {
            mid = (l + r) / 2;
            int i = mid / m;
            int j = mid % m;
        
            if (matrix[i][j] == target)
                return true;
            else if (matrix[i][j] < target)
                l = mid + 1;
            else
                r = mid;
        }
        
        return false;
    }
};
