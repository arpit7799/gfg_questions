#User function Template for python3

class Solution:
    def leastWeightCapacity(self, arr, n, d):

        def canShip(capacity):
            days = 1
            load = 0

            for weight in arr:
                if load + weight > capacity:
                    days += 1
                    load = weight
                else:
                    load += weight

            return days <= d

        low = max(arr)
        high = sum(arr)
        ans = high

        while low <= high:
            mid = (low + high) // 2

            if canShip(mid):
                ans = mid
                high = mid - 1
            else:
                low = mid + 1

        return ans