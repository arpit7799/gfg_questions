# User function Template for python3

class Solution:
    
    #Function to remove common characters and concatenate two strings.
    def concatenatedString(self, s1, s2):
        result = ""
        
        for ch in s1:
            if ch not in s2:
                result += ch
        
        for ch in s2:
            if ch not in s1:
                result += ch
        
        if result == "":
            return "-1"
        else:
            return result