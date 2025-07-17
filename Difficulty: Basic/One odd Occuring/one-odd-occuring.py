class Solution:
    def getOddOccurrence(self, arr):
        count = {}
        for num in arr:
            count[num] = count.get(num, 0) + 1
        
        for key, value in count.items():
            if value % 2 != 0:
                return key