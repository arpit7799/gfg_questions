class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> res;
        
        int maxRight = arr[n - 1];   // rightmost element is always a leader
        res.push_back(maxRight);
        
        // Traverse from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxRight) {
                res.push_back(arr[i]);
                maxRight = arr[i];
            }
        }
        
        // Reverse result because we collected leaders from right to left
        reverse(res.begin(), res.end());
        return res;
    }
};