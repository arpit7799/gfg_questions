# User function Template for python3

class Solution:
    def isSubSequence(self, A, B):
        count = 0
        start = 0
        for char in A:
            found = False
            if start < len(B):
                for i in range(start, len(B)):
                    if B[i] == char:
                        count += 1
                        start = i + 1
                        found = True
                        break
                    else:
                        continue

        if count == len(A):
            return True
        else:
            return False