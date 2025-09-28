class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        string res = "";
        int n = s.length();
        
        res += s[0];
        
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                res += s[i];
            }
        }
        return res;
    }
};