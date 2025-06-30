from typing import List

class Solution:
    def search(self, k: int, arr: List[int]) -> int:
        for i in range(len(arr)):
            if arr[i] == k:
                return i + 1  # 1-based index
        return -1