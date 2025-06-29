# Function to check if pair
# with given sum exists
def pair_sum(dict, arr, sum):
    # code here
    # Hint: You can use 'in' to find if any key is in dict
    freq = {}
    for num in arr:
        if sum - num in freq:
            return True
        freq[num] = freq.get(num, 0) + 1
    return False