class Solution:
    def findSum(self, n: int) -> int:
        sum_natural_number = 0
        for i in range (1, n+1):
            sum_natural_number = sum_natural_number + i
        return sum_natural_number