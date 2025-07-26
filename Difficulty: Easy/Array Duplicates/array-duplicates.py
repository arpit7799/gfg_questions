class Solution:
    def findDuplicates(self, arr):
        freq = {}
        result = []
        
        for num in arr:
            freq[num] = freq.get(num, 0) + 1
        
        for key in freq:
            if freq[key] > 1:
                result.append(key)
        
        return result