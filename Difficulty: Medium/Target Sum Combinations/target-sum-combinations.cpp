class Solution {
  public:
    
    void solve(int idx,vector<int>& arr,int target,vector<int>& curr,vector<vector<int>>& ans){
        
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        
        if(idx == arr.size())
            return;
        
        // Take
        if(arr[idx] <= target){
            curr.push_back(arr[idx]);
            
            solve(idx,arr,target - arr[idx],curr,ans);
            
            curr.pop_back();
        }
        
        // Not Take
        solve(idx + 1,arr,target,curr,ans);
    }
    
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;
        vector<int> curr;
        
        solve(0, arr, target, curr, ans);
        
        return ans;
    }
};