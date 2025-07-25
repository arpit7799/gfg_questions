#User function Template for python3

class Solution:
    
    #Function to check if a string is Pangram or not.
    def checkPangram(self,s):
        arr = [0]* 26
        s = s.lower()
        for char in s:
            if char.isalpha():
                arr[ord(char) - 97] +=1
        for number in arr:
            if number == 0:
                return False
            else:
                continue
        return True