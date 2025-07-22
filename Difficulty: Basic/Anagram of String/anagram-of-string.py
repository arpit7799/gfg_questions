def remAnagram(s1, s2):
    # Frequency arrays for 26 lowercase letters
    count1 = [0] * 26
    count2 = [0] * 26

    for char in s1:
        count1[ord(char) - ord('a')] += 1

    for char in s2:
        count2[ord(char) - ord('a')] += 1

    
    deletions = 0
    for i in range(26):
        deletions += abs(count1[i] - count2[i])

    return deletions