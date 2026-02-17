class Solution:
    def getCount(self, arr, num1, num2):
        left = -1
        right = -1
        
        # Find leftmost num1 and rightmost num2
        for i in range(len(arr)):
            if arr[i] == num1 and left == -1:
                left = i
            if arr[i] == num2:
                right = i
        
        # If either not found
        if left == -1 or right == -1:
            return 0
        
        # Ensure correct order
        if left > right:
            return 0
        
        return right - left - 1