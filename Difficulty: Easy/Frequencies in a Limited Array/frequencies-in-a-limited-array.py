class Solution:
    def frequencyCount(self, arr):
        n = len(arr)
        res = {}
        
        for num in arr:
            if num in res:
                res[num] += 1
            else:
                res[num] = 1
        
        ans = []
        for i in range(1, n + 1):
            ans.append(res.get(i, 0))
        
        return ans