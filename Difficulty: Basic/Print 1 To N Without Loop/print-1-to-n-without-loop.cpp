class Solution {
  public:
    void printNos(int n) {
        // base case
        if(n == 0) return;
        
        printNos(n - 1);
        
        cout << n << " ";
    }
};