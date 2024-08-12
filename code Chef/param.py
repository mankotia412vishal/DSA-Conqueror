# if i am having input as 
# n=2
# str1="ab"
# str2="ab"
# ouput should be 1
# how we can the total number of the possible string 2 which satisfy the condition that 
# 1. it is lexographically greater than or equal to str1
# 2. it is lexographically smaller than or equal to str2
# 3. The bitwise and of the occurance of the char present in s is equal to 0 

# str1 and str2 are of equal length

MOD = 10**9 + 7

def count_valid_strings(N, str1, str2):
    from functools import lru_cache
    
    @lru_cache(None)
    def dp(pos, mask, tight1, tight2):
        if pos == N:
            return 1

        lower_bound = ord(str1[pos]) if tight1 else ord('a')
        upper_bound = ord(str2[pos]) if tight2 else ord('z')

        count = 0
        for char_code in range(lower_bound, upper_bound + 1):
            char_mask = 1 << (char_code - ord('a'))
            if mask & char_mask == 0:  # Check if the bit for this character is not set in mask
                next_mask = mask | char_mask
                next_tight1 = tight1 and (char_code == ord(str1[pos]))
                next_tight2 = tight2 and (char_code == ord(str2[pos]))

                count = (count + dp(pos + 1, next_mask, next_tight1, next_tight2)) % MOD

        return count

    return dp(0, 0, True, True)

# Example Usage
N = 2
str1 = "ab"
str2 = "ad"

print(count_valid_strings(N, str1, str2))  # Output should be 2

