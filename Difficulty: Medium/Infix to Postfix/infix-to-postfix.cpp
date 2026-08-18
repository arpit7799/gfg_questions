class Solution {
  public:

    int priority(char ch) {
        if(ch == '^')
            return 3;

        if(ch == '*' || ch == '/')
            return 2;

        if(ch == '+' || ch == '-')
            return 1;

        return -1;
    }

    string infixToPostfix(string& s) {

        stack<char> st;
        string ans = "";

        for(char ch : s) {

            // Operand
            if(isalnum(ch)) {
                ans += ch;
            }

            // Opening bracket
            else if(ch == '(') {
                st.push(ch);
            }

            // Closing bracket
            else if(ch == ')') {

                while(!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }

                st.pop();
            }

            // Operator
            else {

                while(!st.empty() &&
                      st.top() != '(' &&
                      (priority(st.top()) > priority(ch) ||
                       (priority(st.top()) == priority(ch) && ch != '^'))) {

                    ans += st.top();
                    st.pop();
                }

                st.push(ch);
            }
        }

        // Empty remaining operators
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};