class Solution {
  public:
    int minSum(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        
        int min1 = INT_MAX, secondMin1 = INT_MAX, idx1 = -1;
        for (int i = 0; i < n; i++) {
            if (arr1[i] < min1) {
                secondMin1 = min1;
                min1 = arr1[i];
                idx1 = i;
            } else if (arr1[i] < secondMin1) {
                secondMin1 = arr1[i];
            }
        }
        int min2 = INT_MAX, secondMin2 = INT_MAX, idx2 = -1;
        for (int i = 0; i < n; i++) {
            if (arr2[i] < min2) {
                secondMin2 = min2;
                min2 = arr2[i];
                idx2 = i;
            } else if (arr2[i] < secondMin2) {
                secondMin2 = arr2[i];
            }
        }
        
        if (idx1 != idx2)
            return min1 + min2;
        else
            return min(min1 + secondMin2, min2 + secondMin1);
    }
};