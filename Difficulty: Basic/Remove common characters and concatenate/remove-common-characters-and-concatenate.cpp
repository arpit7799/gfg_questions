class Solution {
  public:
    string concatenatedString(string s1, string s2) {
        unordered_set<char> set1(s1.begin(), s1.end());
        unordered_set<char> set2(s2.begin(), s2.end());
        
        string result = "";

        for (char c : s1) {
            if (set2.find(c) == set2.end()) {
                result.push_back(c);
            }
        }
        
        for (char c : s2) {
            if (set1.find(c) == set1.end()) {
                result.push_back(c);
            }
        }
        
        if (result.empty()) {
            return "-1";
        } else {
            return result;
        }
    }
};