"""
Coding
Big Bang Game
Penny and Sheldon decided to play a game such that each person will
choose 2 numbers, N and k, and has to find a special sequence of
pairs of length k such that no pair has a common integer and
difference of integers in each of the pairs should be unique.
Formally, if you consider N=2, k=1 there could be 3 possible
sequences of length 1 namely (1,2) (1,1) and (2,2).
Penny knows she cannot beat Sheldon since he is too smart for her, so
she comes to you for help. You have to print the integer value modulo
(10% + 7).

input Specification
inputt: N1, number chosen by Sheldon.
inputz: k1, number chosen by Sheldon.
input3: N2, number chosen by Penny.
input4: k2, number chosen by Penny.

Output Specification
Il Sheldon wins, return a string "Sheldon" followed by the number of
sequences he is able to make. If Penny wins, return a string "Penny"
wins followed by the number of sequences she would be able to
make. If no one wins the game, return a string "Equal" followed byl

number of sequences of either one of their strategies.
Example 1
input1: 1
input2: 1
input3: 2
input4: 1
Output: Penny 3
Explanation:
Possible sequences for Sheldon: (1,1)
Possible sequences for Penny: (1,1),(1,2), (2,1)
Hence, the output, Penny 3.

Example 2
input1: 3
input2: 2
input3: 3
input4: 3

Output: Sheldon 2
Explanation:
Possible sequences for Sheldon: (1, 1), (2, 3);(1, 2), (3, 3).
Possible sequences for Penny: 0
Hence, the output, Sheldon 2.

"""
def count_sequences(N, k):
    # The number of sequences is (N^2)^k
    return pow(N*N, k, 10**9 + 7)

def game(N1, k1, N2, k2):
    # Calculate the number of sequences for Sheldon and Penny
    sheldon_sequences = count_sequences(N1, k1)
    penny_sequences = count_sequences(N2, k2)

    # Compare the number of sequences and return the result
    if sheldon_sequences > penny_sequences:
        return "Sheldon " + str(sheldon_sequences)
    elif penny_sequences > sheldon_sequences:
        return "Penny " + str(penny_sequences)
    else:
        return "Equal " + str(sheldon_sequences)

# Test the function with the provided examples
print(game(1, 1, 2, 1))  # Expected output: Penny 3
print(game(3, 2, 3, 3))  # Expected output: Sheldon 2
