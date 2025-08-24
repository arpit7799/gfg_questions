// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string res = "";
        for(int i = 0; i< S.size(); i+=2){
            res += S[i];
        }
        return res;
    }
};