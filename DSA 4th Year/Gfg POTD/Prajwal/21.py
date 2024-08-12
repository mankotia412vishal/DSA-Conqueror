# /*
# Peaks in array
# Given an array arr of size N. A peak in an array is defined as an element arril] such that arri] > arr[i-1]
# and arril) > arr|i+1).
# You have to process Q queries of two types:
# • 1 L R. Determine the count of peak elements and their sum in array arr from index L to R
# • 2 i val. Update the element arr|i] to val.
# For every query of type 1, print two space-separated integers representing the count and sum of the
# peak elements in the given range.
# Notes
# • Assume 1-based indexing.
# • The first and the last elements of the array cannot be the peak.
# • The border elements of the given range are not considered peaks (though they might be a
# peak in the whole array)
# Function description
# Complete the function solve. This function takes the following 4 parameters and returns the required
# answer array.
# • N: Represents the size of array arr
# • arr: Represents the elements of array arr
# • Q: Represents the number of queries
# • Queries: Represents the given queries. It will be Q x 3 size 2D array for each Query, there will
# be 3 integers, the first denoting type and the other two denoting the query itself.

# Input format for custom testing
# Note: Use this input format if you are testing against custom input or writing code in a language
# where we don't provide boilerplate code.
# • The first line contains T, which represents the number of test cases.
# • For each test case:
# • The first line contains N denoting the size of array arr.
# • The second line contains N space-separated integers, denoting the elements of arr.
# • The next line contains @ denoting the number of queries
# • The Q line contains three space-separated integers representing the query.
# Output format
# For each test case in a new line, print two integers space-separated denoting the count and sum of
# the peak elements in the given range for type 1 query in a new line.
# Constraints
# 1≤T ≤ 10
# 3< N≤ 105
# - 10° ≤ arT; ≤ 10º
# 1 ≤ Q ≤ 105
# 1<L<R<N
# 1 <i≤N
# - 10° ≤ val ≤ 10°

# input:
# 1
# 5
# 1 3 2 5 4
# 4 
# 1 1 5
# 1 2 5 
# 2 3 10 
# 1 2 5

# output is 
# 2 8
# 1 5
# 1 10
# */
def solve(N, arr, Q, Queries):
    peak_count = []
    peak_sum = []

    for q in Queries:
        if q[0] == 1:
            L, R = q[1], q[2]
            count, total_sum = 0, 0
            for i in range(L, R - 1):
                if arr[i] > arr[i - 1] and arr[i] > arr[i + 1]:
                    count += 1
                    total_sum += arr[i]
            peak_count.append(count)
            peak_sum.append(total_sum)
        elif q[0] == 2:
            i, val = q[1], q[2]
            arr[i - 1] = val

    return list(zip(peak_count, peak_sum))

# Test case
if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        N = int(input())
        arr = list(map(int, input().split()))
        Q = int(input())
        Queries = [list(map(int, input().split())) for _ in range(Q)]

        out = solve(N, arr, Q, Queries)
        for i_out in out:
            print(' '.join(map(str, i_out)))
