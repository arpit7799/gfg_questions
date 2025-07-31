class Solution:
    def find_unique(self, k, arr):
        #code here
        res = {}
        for item in arr:
            res[item] = res.get(item, 0) + 1
        
        for key, val in res.items():
            if val < k:
                return key
            else:
                continue