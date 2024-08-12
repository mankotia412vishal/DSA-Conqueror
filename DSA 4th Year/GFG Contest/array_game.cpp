#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n), brr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i)
        cin >> brr[i];
    
    int operations = 0;
    while (!arr.empty()) {
        if (arr[0] == brr[0]) {
            arr.erase(arr.begin());
            brr.erase(brr.begin());
        } else {
            arr.push_back(arr[0]);
            arr.erase(arr.begin());
        }
        operations++;
    }
    
    cout << operations << endl;
    
    return 0;
}
