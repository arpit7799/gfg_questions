class Solution:
    
    # Function to find the maximum occurring character in a string.
    def getMaxOccurringChar(self, s):
        res = {}
        for char in s:
            if char in res:
                res[char] += 1
            else:
                res[char] = 1
        
        max_char = ''
        max_count = 0
        
        for key, val in res.items():
            if val > max_count:
                max_count = val
                max_char = key
            elif val == max_count:
                if key < max_char:
                    max_char = key
                    
        return max_char