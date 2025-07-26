class Solution:
    def firstElementKTime(self, arr,k):
        # code here
        res = {}
        
        for i in range(len(arr)):
            if arr[i] in res:
                res[arr[i]] +=1
            else:
                res[arr[i]] = 1
                
            if res[arr[i]] == k:
                return arr[i]
        return -1
    
