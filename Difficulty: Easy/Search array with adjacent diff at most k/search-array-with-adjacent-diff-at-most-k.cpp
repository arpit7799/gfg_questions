class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int n = arr.size();
        for (int i = 0; i < n; ) {
            if (arr[i] == x) {
                return i;
            }
            int step = abs(arr[i] - x) / k;
            if (step == 0) step = 1;
            i += step;
        }
        return -1;
    }
};