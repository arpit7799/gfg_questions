class Solution {
public:
    int countFreq(vector<int>& arr, int target) {
        int res = 0;
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {  
                res++;
                
                int l = mid - 1;
                while (l >= 0 && arr[l] == target) {
                    res++;
                    l--;
                }
                int r = mid + 1;
                while (r < arr.size() && arr[r] == target) {
                    res++;
                    r++;
                }
                break;
            }
            else if (arr[mid] > target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return res;
    }
};