#include <iostream>
#include <string>
#include <set>
using namespace std;

bool is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int solve(string S) {
    int count = 0;
    int n = S.length();
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            set<char> vowels;
            set<char> consonants;
            for (int k = i; k <= j; k++) {
                if (is_vowel(S[k])) {
                    vowels.insert(S[k]);
                } else {
                    consonants.insert(S[k]);
                }
            }
            if (vowels.size() == consonants.size()) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // ignore the newline character after integer input
    while (T--) {
        string S;
        getline(cin, S);
        cout << solve(S) << endl;
    }
    return 0;
}
