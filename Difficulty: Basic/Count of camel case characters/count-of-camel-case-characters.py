class Solution:
    def countCamelCase(self, s):
        cAmEl_cOuNt = 0
        for char in s:
            if 65 <= ord(char) <= 90:
                cAmEl_cOuNt += 1
            else:
                continue
        return cAmEl_cOuNt