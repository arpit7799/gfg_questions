class Solution:
    
    def findSum(self, s):
        total = 0
        temp = ""

        for char in s:
            if char.isdigit():
                temp += char 
            else:
                if temp != "":
                    total += int(temp)
                    temp = ""
        if temp != "":
            total += int(temp)

        return total