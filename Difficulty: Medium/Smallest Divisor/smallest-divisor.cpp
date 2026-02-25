class Solution {
public:

    int sumByD(vector<int>& arr, int div) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += (arr[i] + div - 1) / div;   
        }
        return sum;
    }

    int smallestDivisor(vector<int>& arr, int k) {
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (sumByD(arr, mid) <= k) {
                ans = mid;       
                high = mid - 1;   
            } else {
                low = mid + 1;    
            }
        }

        return ans;
    }
};