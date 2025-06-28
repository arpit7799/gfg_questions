arr = tuple(map(int, input().split()))

########### Write your code below ###############
lst = []
i = 0
while i < len(arr):
    if arr[i] in lst:
        print(False)
        break
    else:
        lst.append(arr[i])
    i += 1
else:
    print(True)
########### Write your code above ###############