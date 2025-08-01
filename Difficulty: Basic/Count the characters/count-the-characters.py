class Solution:
    def getCount(self, S, N):
        count = {}
        prev = ''
        
        for char in S:
            if char != prev:
                if char in count:
                    count[char] += 1
                else:
                    count[char] = 1
            prev = char
        
        res = 0
        for key in count:
            if count[key] == N:
                res += 1
                
        return res