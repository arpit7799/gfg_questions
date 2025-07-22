class Solution:
    def getSecondLargest(self, arr):
        for i in range(len(arr)):
            max = i
            for j in range(i+1,len(arr)):
                if arr[max] > arr[j]:
                    continue
                else:
                    max = j
            arr[i], arr[max] = arr[max], arr[i]
            if i>0:
                if arr[0]>arr[i]:
                    return arr[i]
        return -1
            