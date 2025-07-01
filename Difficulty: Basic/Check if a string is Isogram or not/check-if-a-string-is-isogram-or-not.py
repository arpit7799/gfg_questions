
#User function Template for python3

class Solution:
    
    #Function to check if a string is Isogram or not.
    def isIsogram(self,s):
        res = {}
        for char in s:
            if char in res:
                return False
            else:
                res[char] = 1
        return True