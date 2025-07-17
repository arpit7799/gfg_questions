# User function Template for python3

class Solution:
    #Function to return list containing first n fibonacci numbers.
    def fibonacciNumbers(self,n):
        # your code here
        res = []
        if n >= 1:
            res.append(0)
        if n >= 2:
            res.append(1)
        for i in range(2, n):
            next_fib = res[i-1] + res[i-2]
            res.append(next_fib)
            
        return res