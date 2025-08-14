class Solution {
public:
    /* Function to count odd and even elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        int odd_count = 0;
        int even_count = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        
        return {odd_count, even_count};
    }
};