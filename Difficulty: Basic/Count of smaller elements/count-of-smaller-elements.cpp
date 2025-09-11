class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        int res = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x) {
                res++;
            }
        }
        return res;
    }
};