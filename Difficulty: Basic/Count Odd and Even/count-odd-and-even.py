class Solution:
    def countOddEven(self, arr):
        even_count = 0
        odd_count = 0 

        for number in arr:
            if number % 2 == 0:
                even_count += 1
            else:
                odd_count += 1

        return [odd_count, even_count]