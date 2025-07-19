class Solution:
    def printPat(self, n):
        result = []
        
        for i in range(n, 0, -1):
            for j in range(n, 0, -1):
                for _ in range(i):
                    result.append(j)
            result.append(-1)
            
        return result