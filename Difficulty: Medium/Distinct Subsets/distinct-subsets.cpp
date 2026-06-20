class Solution {
  public:
  
    void solve(int idx,
               vector<int>& arr,
               vector<int>& curr,
               vector<vector<int>>& ans){
        
        ans.push_back(curr);
        
        for(int i = idx; i < arr.size(); i++){
            
            // Skip duplicates
            if(i > idx && arr[i] == arr[i - 1])
                continue;
            
            curr.push_back(arr[i]);
            
            solve(i + 1, arr, curr, ans);
            
            curr.pop_back();
        }
    }
    
    vector<vector<int>> findSubsets(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;
        vector<int> curr;
        
        solve(0, arr, curr, ans);
        
        return ans;
    }
};