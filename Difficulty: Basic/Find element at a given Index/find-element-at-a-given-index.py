
from typing import List


class Solution:
    def findElementAtIndex(self, key : int, arr : List[int]) -> int:
        if key <= len(arr):
            return arr[key]
        else:
            return 0