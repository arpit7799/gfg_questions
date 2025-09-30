class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        int n = arr.size();
        int left = 0, right = n - 1;
        int firstZero = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == 0) {
                firstZero = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        if (firstZero == -1) return 0;

        return n - firstZero;
    }
};