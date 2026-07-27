class Solution {
  public:
    vector<int> primeRange(int l, int r) {
        
        vector<bool> prime(r + 1, true);
        
        if (r >= 0) prime[0] = false;
        if (r >= 1) prime[1] = false;
        
        for (int i = 2; i * i <= r; i++) {
            
            if (prime[i]) {
                
                for (int j = i * i; j <= r; j += i)
                    prime[j] = false;
            }
        }
        
        vector<int> ans;
        
        for (int i = max(2, l); i <= r; i++) {
            
            if (prime[i])
                ans.push_back(i);
        }
        
        return ans;
    }
};