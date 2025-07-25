class Solution:
    def firstRepeated(self, arr):
        freq = {}
        
        for num in arr:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
                
        for idx, num in enumerate(arr):
            if freq[num] > 1:
                return idx + 1 
        
        return -1