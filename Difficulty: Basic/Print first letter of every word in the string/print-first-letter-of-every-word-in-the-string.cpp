class Solution {
  public:
    string firstAlphabet(string S) {
        string ans = "";
        
        ans += S[0];
        
        for (int i = 1; i < S.size(); i++) {
            if (S[i - 1] == ' ' && S[i] != ' ') {
                ans += S[i];
            }
        }
        
        return ans;
    }
};