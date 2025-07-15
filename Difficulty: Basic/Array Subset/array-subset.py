# User function Template for python3

class Solution:
    def isSubset(self, a, b):
        freq = {}

        # Count frequency of each element in a[]
        for num in a:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1

        # Check each element in b[]
        for num in b:
            if num not in freq or freq[num] == 0:
                return False
            freq[num] -= 1

        return True