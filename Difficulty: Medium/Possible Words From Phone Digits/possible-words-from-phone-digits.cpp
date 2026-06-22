class Solution {
  public:
  
    void solve(int idx,
               vector<int>& arr,
               string& curr,
               vector<string>& ans,
               vector<string>& mp){
        
        if(idx == arr.size()){
            if(!curr.empty())
                ans.push_back(curr);
            return;
        }
        
        // Ignore 0 and 1
        if(arr[idx] == 0 || arr[idx] == 1){
            solve(idx + 1, arr, curr, ans, mp);
            return;
        }
        
        string letters = mp[arr[idx]];
        
        for(char ch : letters){
            
            curr.push_back(ch);
            
            solve(idx + 1, arr, curr, ans, mp);
            
            curr.pop_back();
        }
    }
  
    vector<string> possibleWords(vector<int> &arr) {
        
        vector<string> mp = {
            "", "",
            "abc", "def",
            "ghi", "jkl",
            "mno", "pqrs",
            "tuv", "wxyz"
        };
        
        vector<string> ans;
        string curr;
        
        solve(0, arr, curr, ans, mp);
        
        return ans;
    }
};