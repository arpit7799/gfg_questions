#User function Template for python3

class Solution:
    def count(self, s):
        uppercase_count = 0
        lowercase_count = 0
        numeric_character_count = 0
        special_character_count = 0
        
        for char in s:
            if 65 <= ord(char) <= 90:
                uppercase_count += 1
            elif 97 <= ord(char) <= 122:
                lowercase_count += 1
            elif 48 <= ord(char) <= 57:
                numeric_character_count += 1
            else:
                special_character_count += 1
        
        return uppercase_count, lowercase_count, numeric_character_count, special_character_count