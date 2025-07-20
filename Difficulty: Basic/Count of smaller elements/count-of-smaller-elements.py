#User function Template for python3

class Solution:
    def countOfElements(self, x, arr):
        res = []
        for i in range(len(arr)):
            if arr[i] <= x:
                res.append(arr[i])
            else:
                continue
        return len(res)