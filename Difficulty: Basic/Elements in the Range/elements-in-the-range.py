class Solution:
    def check_elements(self, arr, n, A, B):
        elements_set = set(arr)
        for num in range(A, B + 1):
            if num not in elements_set:
                return False
        return True