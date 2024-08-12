# Test case 1: Penny has more sequences
assert count_sequences(4, 4, 4, 12) == "Penny 20"

# Test case 2: Sheldon has more sequences
assert count_sequences(10, 5, 8, 12) == "Sheldon 6"

# Test case 3: Equal number of sequences
assert count_sequences(6, 3, 7, 2) == "Equal 4"