# # input is : cat batman latt matter cat matter cat
# # output is : cat matter

# def get_repeated_words(textinput):
#     words = textinput.split()
#     word_count = {}
    
#     for word in words:
#         word_count[word] = word_count.get(word, 0) + 1
    
#     repeated_words = [word for word, count in word_count.items() if count > 1]
#     if len(repeated_words) == 0:
#         return "NA"
#     s
#     return " ".join(sorted(repeated_words))

# # Get input from the user
# textinput = input("Enter the text: ")

# # Get the result and print it
# result = get_repeated_words(textinput)
# print(result)

def convertToTitle(columnNumber):
    result = []
    
    while columnNumber > 0:
        columnNumber -= 1  # Adjust to 0-based index
        remainder = columnNumber % 26
        print(remainder)
        input()
        result.append(chr(65 + remainder))  # Convert to corresponding letter
        columnNumber //= 26
    
    return ''.join(result[::-1])  # Reverse the list and join to get the final title

# Test cases
print(convertToTitle(26))   # Output: "A"
print(convertToTitle(28))  # Output: "AB"
