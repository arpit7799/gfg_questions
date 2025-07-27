class Solution:
    def areAnagrams(self, s1, s2):
       s1_arr = [0]*26
       s2_arr = [0]*26
       for char in s1:
           s1_arr[ord(char)-97]+=1
       for char in s2:
           s2_arr[ord(char)-97]+=1
       if s1_arr == s2_arr:
           return True
       else:
           return False