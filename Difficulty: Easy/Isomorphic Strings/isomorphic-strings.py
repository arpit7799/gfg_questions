class Solution:
    def areIsomorphic(self, s1, s2):
        if len(s1) != len(s2):
            return False

        mapping = {}        # to store s1 -> s2 mapping
        mapped_chars = set()  # to check if s2 characters are already used

        for i in range(len(s1)):
            c1 = s1[i]
            c2 = s2[i]

            if c1 in mapping:
                # if already mapped, check for consistency
                if mapping[c1] != c2:
                    return False
            else:
                # if c2 already used by some other c1
                if c2 in mapped_chars:
                    return False
                mapping[c1] = c2
                mapped_chars.add(c2)

        return True