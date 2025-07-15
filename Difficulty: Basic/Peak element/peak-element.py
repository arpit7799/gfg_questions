class Solution:
    def peakElement(self, arr):
        n = len(arr)
        
        for i in range(n):
            left = arr[i - 1] if i - 1 >= 0 else float('-inf')
            right = arr[i + 1] if i + 1 < n else float('-inf')

            if arr[i] > left and arr[i] > right:
                return i  # Return index of any peak
        
        return -1 