class Solution {
  public:
    int binarySubstring(string& s) {
        int count = 0;
        for (char c : s) {
            if (c == '1') count++;
        }
        return (count * (count - 1)) / 2;
    }
};