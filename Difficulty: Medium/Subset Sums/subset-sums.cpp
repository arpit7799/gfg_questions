class Solution {
  public:
  
    void solve(int idx,
               vector<int>& arr,
               int sum,
               vector<int>& ans){
        
        if(idx == arr.size()){
            ans.push_back(sum);
            return;
        }
        
        // Take
        solve(idx + 1,
              arr,
              sum + arr[idx],
              ans);
        
        // Not Take
        solve(idx + 1,
              arr,
              sum,
              ans);
    }
  
    vector<int> subsetSums(vector<int>& arr) {
        
        vector<int> ans;
        
        solve(0, arr, 0, ans);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};