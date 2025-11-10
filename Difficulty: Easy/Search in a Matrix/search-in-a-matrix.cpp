class Solution {
  public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>>& matrix, int x) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == x)
                    return true;
            }
        }
        return false;
    }
};