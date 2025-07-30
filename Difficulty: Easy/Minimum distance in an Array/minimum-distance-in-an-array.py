class Solution:
    def minDist(self, arr, x, y):
        x_index = -1
        y_index = -1
        ans = float('inf')
        for i in range(len(arr)):
            if arr[i] == x:
                x_index = i
            elif arr[i] == y:
                y_index = i
            if x_index != -1 and y_index != -1:
                ans = min(ans, abs(x_index - y_index))
        if ans == float('inf'):
            return -1
        else:
            return ans