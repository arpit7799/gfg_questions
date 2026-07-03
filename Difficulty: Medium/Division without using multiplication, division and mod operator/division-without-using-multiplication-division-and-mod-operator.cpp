class Solution {
  public:
    int divide(int a, int b) {
        
        if(a == INT_MIN && b == -1)
            return INT_MAX;
        
        long long dividend = abs((long long)a);
        long long divisor = abs((long long)b);
        
        long long ans = 0;
        
        while(dividend >= divisor){
            
            int shift = 0;
            
            while(dividend >= (divisor << (shift + 1))){
                shift++;
            }
            
            ans += (1LL << shift);
            dividend -= (divisor << shift);
        }
        
        if((a < 0) ^ (b < 0))
            ans = -ans;
        
        return (int)ans;
    }
};