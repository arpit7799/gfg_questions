class Solution:

    def segregateEvenOdd(self, arr):
        lst = []
        for i in range(len(arr)):
            if arr[i] % 2 == 0:
                lst.append(arr[i])
        for i in range(len(arr)):
            if arr[i] % 2 != 0:
                lst.append(arr[i])
        lst[:len([x for x in arr if x % 2 == 0])] = sorted(lst[:len([x for x in arr if x % 2 == 0])])
        lst[len([x for x in arr if x % 2 == 0]):] = sorted(lst[len([x for x in arr if x % 2 == 0]):])
        for i in range(len(arr)):
            arr[i] = lst[i]