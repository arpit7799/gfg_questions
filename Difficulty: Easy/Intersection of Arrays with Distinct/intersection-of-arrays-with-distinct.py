class Solution:
    def intersectSize(self, a, b):
        set_a = set(a)
        result = set()

        for num in b:
            if num in set_a:
                result.add(num)

        return len(result)