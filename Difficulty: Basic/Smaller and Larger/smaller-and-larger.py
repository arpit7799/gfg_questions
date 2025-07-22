from bisect import bisect_right, bisect_left

class Solution:
    def getMoreAndLess(self, arr, target):
        n = len(arr)
        less_or_equal = bisect_right(arr, target)  # elements ≤ target
        greater_or_equal = n - bisect_left(arr, target)  # elements ≥ target
        return [less_or_equal, greater_or_equal]