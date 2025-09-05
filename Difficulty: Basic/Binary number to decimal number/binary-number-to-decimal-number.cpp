#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binaryToDecimal(string &b) {
        int n = b.length();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (b[i] == '1') {
                sum += pow(2, n - i - 1);
            }
        }
        return sum;
    }
};