class Solution {
  public:
    string isVowel(char c) {
        // code here
        c = tolower(c);
        if(c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u'){
            return "YES";
        }
        else{
            return "NO";
        }
    }
};