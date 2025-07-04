
from typing import List
import copy

class Solution:
    def isPerfect(self, arr : List[int]) -> bool:
        arr1 = copy.deepcopy(arr)
        i = 0
        j = len(arr1)-1
        
        while (i<j):
            arr[i], arr[j] = arr[j], arr[i]
            i+=1
            j-=1
            
        if arr1 == arr:
            return True
            
        else:
            return False
        