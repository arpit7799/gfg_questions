class Solution {
public:
    bool isSubSequence(string A, string B) {
        int i = 0, j = 0;
        int n = A.size(), m = B.size();
        
        while (i < n && j < m) {
            if (A[i] == B[j]) {
                i++;
            }
            j++;
        }
        
        return (i == n);
    }
};