class Solution {
  public:
  
    void solve(int num,
               int target,
               int k,
               vector<int>& curr,
               vector<vector<int>>& ans){
        
        if(target == 0 && curr.size() == k){
            ans.push_back(curr);
            return;
        }
        
        if(num > 9 || target < 0 || curr.size() > k)
            return;
        
        // Take
        curr.push_back(num);
        
        solve(num + 1,
              target - num,
              k,
              curr,
              ans);
        
        curr.pop_back();
        
        // Not Take
        solve(num + 1,
              target,
              k,
              curr,
              ans);
    }
  
    vector<vector<int>> combinationSum(int n, int k) {
        
        vector<vector<int>> ans;
        vector<int> curr;
        
        solve(1, n, k, curr, ans);
        
        return ans;
    }
};