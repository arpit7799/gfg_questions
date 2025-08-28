class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int freq[26] = {0};  // store frequency of characters
        
        // 1st pass → count frequencies
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        // 2nd pass → find first char with frequency 1
        for (char c : s) {
            if (freq[c - 'a'] == 1) 
                return c;
        }
        
        return '$';  // if no non-repeating character
    }
};