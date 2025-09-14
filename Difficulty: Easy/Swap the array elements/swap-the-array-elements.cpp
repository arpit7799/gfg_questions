class Solution {
  public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr) {
        for (int i = 0; i + 2 < arr.size(); i++) {
            swap(arr[i], arr[i + 2]);
        }
    }
};