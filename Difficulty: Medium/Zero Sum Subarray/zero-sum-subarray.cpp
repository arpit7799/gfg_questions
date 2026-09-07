class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {

        unordered_set<int> st;

        int sum = 0;

        for(int x : arr) {

            sum += x;

            if(sum == 0)
                return true;

            if(st.find(sum) != st.end())
                return true;

            st.insert(sum);
        }

        return false;
    }
};