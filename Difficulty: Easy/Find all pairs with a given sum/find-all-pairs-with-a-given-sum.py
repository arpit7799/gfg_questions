from collections import Counter

class Solution:
    def allPairs(self, target, arr1, arr2):
        res = []
        freq = Counter(arr2)  # count how many times each value appears in arr2

        for a in arr1:
            b = target - a
            if b in freq:
                # Add the pair as many times as b appears in arr2
                for _ in range(freq[b]):
                    res.append((a, b))

        res.sort()
        return res