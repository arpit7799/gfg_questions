class Solution {
  public:
    int countSubarray(vector<int>& arr) {
        map<int, int> mp;
        mp[0] = 1;

        int sum = 0, ans = 0;

        for(int x : arr) {
            sum += (x == 0 ? -1 : 1);

            ans += mp[sum];
            mp[sum]++;
        }

        return ans;
    }
};