class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;  // original size should be n
        long long total = (1LL * n * (n + 1)) / 2; // sum of 1..n
        long long sum = 0;
        
        for (int num : arr) {
            sum += num;
        }
        
        return total - sum; // missing number
    }
};