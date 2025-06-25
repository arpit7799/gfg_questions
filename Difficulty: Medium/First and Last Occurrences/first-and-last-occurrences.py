class Solution:
    def find(self, arr, x):
        first = self.binarySearch(arr, x, True)
        last = self.binarySearch(arr, x, False)
        return [first, last]

    def binarySearch(self, arr, x, findFirst):
        low = 0
        high = len(arr) - 1
        result = -1
        
        while low <= high:
            mid = (low + high) // 2
            if arr[mid] == x:
                result = mid
                if findFirst:
                    high = mid - 1
                else:
                    low = mid + 1 
            elif arr[mid] < x:
                low = mid + 1
            else:
                high = mid - 1
        
        return result