class Solution:
    def largest(self, arr):
        largest_number = float('-inf')
        for number in arr:
            if number > largest_number:
                largest_number=number
            else:
                continue
        return largest_number
        