class Solution {
  public:
    double power(double b, int e) {
        
        long long exp = e;
        
        if(exp < 0){
            b = 1.0 / b;
            exp = -exp;
        }
        
        double ans = 1.0;
        
        while(exp > 0){
            
            if(exp & 1){
                ans *= b;
            }
            
            b *= b;
            exp >>= 1;
        }
        
        return ans;
    }
};