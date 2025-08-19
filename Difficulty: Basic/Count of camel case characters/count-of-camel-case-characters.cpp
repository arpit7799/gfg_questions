class Solution {
  public:
    int countCamelCase(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                res += 1;
            }
        }
        return res;
    }
};