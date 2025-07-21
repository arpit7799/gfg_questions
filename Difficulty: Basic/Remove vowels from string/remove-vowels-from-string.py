#User function Template for python3
class Solution:
    def removeVowels(self, s):
        res = ""
        vowels = "a,i,o,e,u"
        for char in s:
            if char in vowels:
                continue
            else:
                res = res+char
        return res