class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int n = arr.size();
        int lastPos = -1;   // last index where x or y was seen
        int minDist = INT_MAX;
        bool foundX = false, foundY = false;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == x || arr[i] == y) {
                if (lastPos != -1 && arr[i] != arr[lastPos]) {
                    minDist = min(minDist, i - lastPos);
                }
                lastPos = i;
                if (arr[i] == x) foundX = true;
                if (arr[i] == y) foundY = true;
            }
        }
        
        if (!foundX || !foundY) return -1;
        return (minDist == INT_MAX) ? -1 : minDist;
    }
};