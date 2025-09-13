class Solution {
  public:
    string modify(string& s) {
        // code here.
        string res = "";
        for(char c : s){
            if(c!=' '){
                res.push_back(c);
            }
        }
        return res;
    }
};