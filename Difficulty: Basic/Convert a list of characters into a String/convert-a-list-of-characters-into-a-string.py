# User function Template for python3

class Solution:
    def chartostr(self, arr, N):
        new_string = ""
        for i in range(N):
            new_string += arr[i]
        return new_string