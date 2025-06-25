#User function Template for python3

class Solution:
    def countZeroes(self, arr):
        # code here
        ans = -1
        start = 0
        end = len(arr) - 1

        while (start <= end):
            mid = (start + end) // 2

            if arr[mid] == 1:
                start = mid + 1
            else:
                ans = mid
                end = mid - 1

        return len(arr) - ans