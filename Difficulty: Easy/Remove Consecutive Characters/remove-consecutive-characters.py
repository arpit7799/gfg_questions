# User function Template for python3

class Solution:
    def removeConsecutiveCharacter(self, s):
        res = ''
        for i in range(len(s)):
            if i == 0 or s[i] != s[i-1]:
                res = res + s[i]
            else:
                continue
        return res