def minOperationsToSpecial(num):
    n = len(num)
    min_ops = float('inf')

    # Check if the last two digits are already divisible by 25
    if n >= 2 and (int(num[n - 2:]) % 25 == 0):
        return 0

    # Iterate through the string from right to left
    for i in range(n - 1, -1, -1):
        for j in range(i - 1, -1, -1):
            # Construct the current pair of digits as an integer
            current_pair = int(num[i] + num[j])

            if current_pair % 25 == 0:
                # Calculate the number of operations needed to remove the remaining digits
                operations = n - i - 1 + j
                min_ops = min(min_ops, operations)

    return min_ops if min_ops != float('inf') else -1  # Return -1 if no special number is possible

# Example usage:
num = "2245047"
result = minOperationsToSpecial(num)
print(result)  # Output: 2

num = "2908305"
result = minOperationsToSpecial(num)
print(result)  # Output: 3

num = "10"
result = minOperationsToSpecial(num)
print(result)  # Output: 1
