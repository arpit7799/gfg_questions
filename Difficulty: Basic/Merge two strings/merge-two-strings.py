# User function Template for python3
class Solution:
    def merge(self, S1, S2):
        res = ''
        for i in range(min(len(S1), len(S2))):
            res = res + S1[i] + S2[i]
        res = res + S1[i+1:] + S2[i+1:]
        return res