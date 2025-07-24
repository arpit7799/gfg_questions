class Solution:
    def multiply(self, arr):
        first_half_sum = 0
        second_half_sum = 0
        n = len(arr)
        
        for i in range(n):
            if i < n // 2:
                first_half_sum += arr[i]
            else:
                second_half_sum += arr[i]
                
        return first_half_sum * second_half_sum