class Solution {
  public:
    int maxProfit(int m, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        
        int profit = 0;
        
        for (int i = 0; i < min(m, (int)arr.size()); i++) {
            if (arr[i] < 0)
                profit += abs(arr[i]);
            else
                break;
        }
        
        return profit;
    }
};