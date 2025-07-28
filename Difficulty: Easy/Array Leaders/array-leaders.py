class Solution:
    def leaders(self, arr):
        lst = []
        max_right = float('-inf')
        for i in range(len(arr)-1, -1, -1):
            if arr[i] >= max_right:
                lst.append(arr[i])
                max_right = arr[i]
        return lst[::-1]