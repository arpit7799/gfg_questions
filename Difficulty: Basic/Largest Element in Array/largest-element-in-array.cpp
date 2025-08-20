class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest = arr[0];
        for (int x : arr) {
            if (x > largest) {
                largest = x;
            }
        }
        return largest;
    }
};
