#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> search(string pattern, string text)
{
    vector<int> ans;
    int found = text.find(pattern);

    while (found != string::npos) {
        ans.push_back(found);
        found = text.find(pattern, found + 1); // Start searching from the next position
    }

    return ans;
}

int main() {
    string text = "abracadabra";
    string pattern = "abra";

    vector<int> indices = search(pattern, text);

    cout << "Pattern found at indices: ";
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
