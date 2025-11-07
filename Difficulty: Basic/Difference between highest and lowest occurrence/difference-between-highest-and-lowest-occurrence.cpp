class Solution {
  public:
    int findDiff(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) freq[num]++;  // count frequency
        
        int mx = INT_MIN, mn = INT_MAX;
        for (auto &p : freq) {
            mx = max(mx, p.second);
            mn = min(mn, p.second);
        }
        return mx - mn;
    }
};