#User function Template for python3

class Solution:
    def firstRep(self, s):
        out = {}
        for char in s:
            if char in out:
                out[char] +=1
            else:
                out[char] =1
        for key, value in out.items():
            if value>1:
                return key
            else:
                continue
        return '#'