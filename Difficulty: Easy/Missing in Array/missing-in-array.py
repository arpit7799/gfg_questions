# User function Template for python3
class Solution:
    def missingNum(self, arr):
        n = len(arr) + 1  # The total numbers should be from 1 to n
        expected_sum = n * (n + 1) // 2
        actual_sum = sum(arr)
        return expected_sum - actual_sum