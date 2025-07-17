#User function Template for python3


class Solution:
    def factorial (self, n):
        # code here
        if n < 0:
            return
        elif n == 0:
            return 1
        else:
            result = 1
        for i in range(1, n + 1):
            result *= i
        return result