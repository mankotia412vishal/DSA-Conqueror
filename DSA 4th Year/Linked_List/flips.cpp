#include <iostream>
#include <string>

using namespace std;

int minFlipsForSubstring(const string& password) {
    int flipsStartingWith0 = 0;
    int flipsStartingWith1 = 0;

    for (int i = 0; i < password.length(); i++) {
        // Check if we expect an even-length substring starting with '0'
        if (i % 2 == 0) {
            if (password[i] != '0') {
                flipsStartingWith0++;
            }
        }
        // Check if we expect an even-length substring starting with '1'
        else {
            if (password[i] != '1') {
                flipsStartingWith1++;
            }
        }
    }

    // Return the minimum of the two counters
    return min(flipsStartingWith0, flipsStartingWith1);
}

int main() {
    string pwd = "11100110";
    int minFlips = minFlipsForSubstring(pwd);
    cout << "Minimum number of flips required: " << minFlips << endl;
    return 0;
}
