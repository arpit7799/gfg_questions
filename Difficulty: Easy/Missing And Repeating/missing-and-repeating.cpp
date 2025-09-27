class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();
        
        // expected sums
        long long S = (n * (n + 1)) / 2;
        long long P = (n * (n + 1) * (2 * n + 1)) / 6;
        
        // actual sums
        long long S1 = 0, P1 = 0;
        for (long long x : arr) {
            S1 += x;
            P1 += (long long)x * x;
        }
        
        // equations
        long long diff1 = S1 - S;             // x - y
        long long diff2 = P1 - P;             // x^2 - y^2
        
        long long sumXY = diff2 / diff1;      // x + y
        
        long long x = (diff1 + sumXY) / 2;    // repeating
        long long y = x - diff1;              // missing
        
        return {(int)x, (int)y};
    }
};