class Solution {
  public:
    int getSingle(vector<int> &arr) {

        int ans = 0;

        for (int num : arr) {
            ans ^= num;
        }

        return ans;
    }
};