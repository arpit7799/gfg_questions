class Solution {
  public:
    vector<int> count(string s) {
        // code here.
        map<string, int> count;
        count["LowerCase"] = 0;
        count["Upper_Case"] = 0;
        count["Special_Char"] = 0;
        count["Numeric"] = 0;
        
        for(char c: s){
            if(isdigit(c)){
                count["Numeric"]++;
            }
            else if(isupper(c)){
                count["Upper_Case"]++;
            }
            else if(islower(c)){
                count["LowerCase"]++;
            }
            else{
                count["Special_Char"]++;
            }
        }
        return {count["Upper_Case"], count["LowerCase"], count["Numeric"], count["Special_Char"]};
    }
};