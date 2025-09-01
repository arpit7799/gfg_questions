class Solution {
  public:
    string convert(string& s) {
        // Capitalize first character if it's a letter
        if (!s.empty() && isalpha(s[0])) {
            s[0] = toupper(s[0]);
        }

        // Traverse string and capitalize letter after space
        for (int i = 1; i < s.size(); i++) {
            if (s[i-1] == ' ' && isalpha(s[i])) {
                s[i] = toupper(s[i]);
            }
        }

        return s;
    }
};