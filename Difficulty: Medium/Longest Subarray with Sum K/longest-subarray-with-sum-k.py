class Solution:
    def longestSubarray(self, arr, k):
        prefix_map = {}
        curr_sum = 0
        max_len = 0
        
        for i in range(len(arr)):
            curr_sum += arr[i]
            
            # If sum itself equals k
            if curr_sum == k:
                max_len = i + 1
            
            # If (curr_sum - k) seen before
            if (curr_sum - k) in prefix_map:
                max_len = max(max_len, i - prefix_map[curr_sum - k])
            
            # Store first occurrence only
            if curr_sum not in prefix_map:
                prefix_map[curr_sum] = i
        
        return max_len