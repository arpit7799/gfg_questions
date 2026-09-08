class Solution:
    def sumSubMins(self, arr):
        n = len(arr)
        stack = []
        ans = 0

        for i in range(n):
            while stack and arr[stack[-1]] > arr[i]:
                j = stack.pop()

                left = j - stack[-1] if stack else j + 1
                right = i - j

                ans += arr[j] * left * right

            stack.append(i)

        # Remaining elements
        while stack:
            j = stack.pop()

            left = j - stack[-1] if stack else j + 1
            right = n - j

            ans += arr[j] * left * right

        return ans