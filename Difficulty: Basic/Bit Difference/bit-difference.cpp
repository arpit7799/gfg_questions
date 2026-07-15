class Solution {
  public:
    int countBitsFlip(int a, int b) {
        
        int diff = a ^ b;
        int count = 0;
        
        while(diff){
            count++;
            diff = diff & (diff - 1);
        }
        
        return count;
    }
};
