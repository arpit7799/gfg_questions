class Solution:
    def longest(self, arr):
        #code here
        longest_str = ""
        for name in arr:
            if len(name) > len(longest_str):
                longest_str = name
        return longest_str