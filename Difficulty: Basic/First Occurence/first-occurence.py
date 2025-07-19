#Function to locate the occurrence of the string x in the string s.
class Solution:
    def firstOccurence(self,txt,pat):
        for i in range(len(txt)):
            val2 = txt[i]
            val = pat[0]
            if val == val2:
                search = txt[i:i + len(pat)]
                if search == pat:
                    return i
                else:
                    continue
            else:
                continue
        return -1