#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


bool isPrefix(const string& str1, const string& str2) {
    return str2.find(str1) == 0;
}


string findNonPrefixString(const vector<string>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (i != j && isPrefix(arr[i], arr[j])) {
                return arr[i];
            }
        }
    }

    return "";
}

int main() {
    vector<string> rr =a {"RY", "S", "1", "Note", "ME"};
    string result = findNonPrefixString(arr);

    if (result.empty()) {
        cout << " return empty string." << endl;
    } else {
        cout << "Bad set " << result << endl;
    }

    return 0;
}
