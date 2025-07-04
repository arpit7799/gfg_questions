#User function Template for python3

class Solution:
    #Complete the below function
    def search(self,arr, x):
        for num in arr:
            if x in arr:
                return arr.index(x)
            else:
                return -1