class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        int totalSum = 0;
        for(int i = 0; i < n; i++)
            totalSum += arr[i];  // calculate total sum of array

        int leftSum = 0;
        for(int i = 0; i < n; i++) {
            int rightSum = totalSum - leftSum - arr[i];  // sum of elements after i
            if(leftSum == rightSum)
                return i;  // equilibrium index found
            leftSum += arr[i];  // add current element to left sum
        }
        return -1;  // no equilibrium point
    }
};