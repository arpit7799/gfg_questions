#User function Template for python3
class Solution:
    # Function to find values in array equal to their indices
    def valueEqualToIndex(self, arr):
        res = []
        for i in range(len(arr)):
            index = i+1
            if arr[i] == index:
                res.append(arr[i])
            else:
                continue
        return res
            