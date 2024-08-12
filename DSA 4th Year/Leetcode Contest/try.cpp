#include <bits/stdc++.h>
using namespace std;

bool checkAcronym(const vector<string>& words, const string& s) {
    if (s.size() != words.size()) {
        return false;
    }

    for (size_t i = 0; i < words.size(); ++i) {
        if (words[i][0] != s[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<string> words = {"alice", "bob", "charlie"};
    string s = "abc";

    if (checkAcronym(words, s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
