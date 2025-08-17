#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string modify(string& s) {
        if (s.empty()) 
            return s;

        // Check the case of first character
        bool make_upper = isupper(s[0]);

        // Convert entire string based on first character
        for (int i = 0; i < s.length(); ++i) {
            if (make_upper) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }

        return s;
    }
};
