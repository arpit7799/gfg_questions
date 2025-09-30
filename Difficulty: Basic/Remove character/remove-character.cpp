// User function template for C++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // store characters of str2 in a hash set
        unordered_set<char> st(str2.begin(), str2.end());
        
        string result = "";
        for (char c : str1) {
            // include only if not present in str2
            if (st.find(c) == st.end()) {
                result.push_back(c);
            }
        }
        return result;
    }
};