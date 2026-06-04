class Solution {
  public:
    int maxSubstring(string &s) {
        
        int currSum = 0;
        int maxSum = -1;
        
        for(char ch : s){
            
            int val = (ch == '0') ? 1 : -1;
            
            currSum += val;
            
            maxSum = max(maxSum, currSum);
            
            if(currSum < 0){
                currSum = 0;
            }
        }
        
        return maxSum;
    }
};