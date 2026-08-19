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

    string infixToPrefix(string& s) {

        // Step 1: Reverse
        reverse(s.begin(), s.end());

        // Step 2: Swap brackets
        for(char &ch : s) {

            if(ch == '(')
                ch = ')';

            else if(ch == ')')
                ch = '(';
        }

        stack<char> st;
        string ans = "";

        // Step 3: Infix to Postfix
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

                if(!st.empty())
                    st.pop();
            }

            // Operator
            else {

                while(!st.empty() &&
                      st.top() != '(' &&
                      (priority(st.top()) > priority(ch) ||
                       (priority(st.top()) == priority(ch) && ch == '^'))) {

                    ans += st.top();
                    st.pop();
                }

                st.push(ch);
            }
        }

        // Remaining operators
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        // Step 4: Reverse postfix
        reverse(ans.begin(), ans.end());

        return ans;
    }
};