class Solution {
  public:
    string isPrime(int n) {
        if (n <= 1) return "No";   // 1 and below are not prime
        if (n == 2) return "Yes";  // 2 is prime
        if (n % 2 == 0) return "No"; // even numbers > 2 are not prime

        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                return "No";   // divisible → not prime
            }
        }
        return "Yes";  // passed all checks → prime
    }
};