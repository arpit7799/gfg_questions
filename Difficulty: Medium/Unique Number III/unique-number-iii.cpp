class Solution {
  public:
    int getSingle(vector<int> &arr) {
        
        int ans = 0;
        
        // Check every bit position
        for (int i = 0; i < 32; i++) {
            
            int count = 0;
            
            // Count set bits at ith position
            for (int num : arr) {
                if (num & (1 << i))
                    count++;
            }
            
            // The unique number contributes the remaining bit
            if (count % 3)
                ans |= (1 << i);
        }
        
        return ans;
    }
};