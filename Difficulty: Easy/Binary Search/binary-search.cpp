class Solution {
public:
    int binarysearch(vector<int> &arr, int k) {
        int left = 0;
        int right = arr.size() - 1;
        int ans = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == k) {
                ans = mid;       // store answer
                right = mid - 1; // keep searching on the left side
            }
            else if (arr[mid] < k) {
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }

        return ans;
    }
};