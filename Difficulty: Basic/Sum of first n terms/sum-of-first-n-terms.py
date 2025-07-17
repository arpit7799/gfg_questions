#User function Template for python3

class Solution:
    def sumOfSeries(self,n):
        #code here
        res = 0
        for i in range(1,n+1):
            res = res + (i*i*i)
            i+=1
        return res