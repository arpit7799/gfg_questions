# User function Template for python3

class Solution:
    def convert(self, s):
        new_list = s.split(" ")
        for i in range(len(new_list)):
            word = new_list[i]
            if word:
                new_list[i] = word[0].upper() + word[1:]
        return " ".join(new_list)