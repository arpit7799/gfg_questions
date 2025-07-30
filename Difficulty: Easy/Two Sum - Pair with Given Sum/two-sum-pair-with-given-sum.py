class Solution:
    def twoSum(self, arr, target):
        nums = set() 
        for value in arr:
            diff = target - value
            if diff in nums:
                return True
            nums.add(value)
        return False