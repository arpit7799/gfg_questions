#User function Template for python3

class Solution:
    ##Complete this function
    def searchInSorted(self,arr, k):
        #Your code here
        for i in range(len(arr)):
            if arr[i] == k:
                return True
            else:
                continue
        return False