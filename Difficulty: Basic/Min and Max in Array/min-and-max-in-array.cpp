// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int minVal = arr[0], maxVal = arr[0];
        for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
        return {minVal, maxVal};
    }
};