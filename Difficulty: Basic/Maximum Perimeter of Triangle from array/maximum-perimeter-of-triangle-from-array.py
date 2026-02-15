class Solution:
    
    def maxPerimeter(self, arr):
        arr.sort()
        
        n = len(arr)
        
        for i in range(n - 1, 1, -1):
            if arr[i - 2] + arr[i - 1] > arr[i]:
                return arr[i - 2] + arr[i - 1] + arr[i]
        
        return -1