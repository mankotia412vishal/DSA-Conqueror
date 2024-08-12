#include <iostream>
#include <vector>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int beautifulSubstrings(string s, int k) {
    int n = s.length();
    int count = 0;

    for (int i = 0; i < n; i++) {
        int vowels = 0, consonants = 0;

        for (int j = i; j < n; j++) {
            if (isVowel(s[j])) {
                vowels++;
            } else {
                consonants++;
            }

            if (vowels == consonants && vowels * consonants % k == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    // Example 1
    string s1 = "baeyh";
    int k1 = 2;
    cout << beautifulSubstrings(s1, k1) << endl;  // Output: 2

    // Example 2
    string s2 = "abba";
    int k2 = 1;
    cout << beautifulSubstrings(s2, k2) << endl;  // Output: 3

    // Example 3
    string s3 = "bcdf";
    int k3 = 1;
    cout << beautifulSubstrings(s3, k3) << endl;  // Output: 0

    return 0;
}
