class Solution {
  public:
    
    void solve(int idx, string &s,
               string curr,
               vector<string>& ans){
        
        if(idx == s.size()){
            ans.push_back(curr);
            return;
        }
        
        // Take
        solve(idx + 1, s, curr + s[idx], ans);
        
        // Not Take
        solve(idx + 1, s, curr, ans);
    }
    
    vector<string> powerSet(string &s) {
        
        vector<string> ans;
        
        solve(0, s, "", ans);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};