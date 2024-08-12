#include <stdio.h>
#include <string.h>

int main() {
    char s[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num;
    char str[10];
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a string: ");
    scanf("%s", str);
    printf("%s",s[num]);

    // Flag to track if the character has been used or not
    int used[10] = {0};

    // Iterate through the characters of the string
    // eon -> one 
    for (int i = 0; i < strlen(str); i++) {
        // Iterate through the word form of the number
        for (int j = 0; j < strlen(s[num]); j++) {
            // If the characters match and the character hasn't been used
            if (str[i] == s[num][j] && !used[j]) {
                used[j] = 1; // Mark the character as used
                break; // Exit the loop
            }
        }
    }

    // Check if all characters of the number's word form have been used
    int allUsed = 1;
    for (int i = 0; i < strlen(s[num]); i++) {
        if (!used[i]) {
            allUsed = 0;
            break;
        }
    }

    if (allUsed) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
