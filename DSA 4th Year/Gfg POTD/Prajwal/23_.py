def is_vowel(char):
    vowels = 'aeiou'
    return char in vowels

def solve(S):
    count = 0
    n = len(S)

    for i in range(n):
        vowels = set()
        consonants = set()

        for j in range(i, n):
            if is_vowel(S[j]):
                vowels.add(S[j])
            else:
                consonants.add(S[j])

            if len(vowels) == len(consonants):
                count += 1

    return count

# Test the function
if __name__ == "__main__":
    num_cases = int(input())

    # Custom test cases
    test_cases = []
    for _ in range(num_cases):
        test_case = input()
        test_cases.append(test_case)

    # Test the function
    for test_case in test_cases:
        print(solve(test_case))