class Solution {
  public:
    
    bool isPowerOfTwo(int n){
        return (n & (n - 1)) == 0;
    }
    
    string lexicographicallySmallest(string &s, int k) {
        
        int n = s.size();
        
        // Modify k
        if(isPowerOfTwo(n))
            k /= 2;
        else
            k *= 2;
        
        if(k >= n)
            return "-1";
        
        int keep = n - k;
        
        string st;
        
        for(char ch : s){
            
            while(!st.empty() && k > 0 && st.back() > ch){
                st.pop_back();
                k--;
            }
            
            st.push_back(ch);
        }
        
        while(k > 0){
            st.pop_back();
            k--;
        }
        
        return st.substr(0, keep);
    }
};