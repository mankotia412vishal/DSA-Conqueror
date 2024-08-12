#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n = 4, m = 4;
    int arr[n] = {1, 4, 5, 7};
    int brr[m] = {10, 20, 30, 40};
    int x = 50;
    int count = 0;

    // Sort the second array (brr) to make binary search easier
    sort(brr, brr + m);

    int closest_diff = INT_MAX;

    for (int i = 0; i < n; i++) {
        int first = arr[i];
        int sum = x - first;

        int start = 0, end = m - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int curr_sum = first + brr[mid];

            int diff = abs(x - curr_sum);

            if (diff < closest_diff) {
                closest_diff = diff;
                count = 1; // Reset the count and update it
            } else if (diff == closest_diff) {
                count++; // Increment the count if the difference is the same
            }

            if (curr_sum <= x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}
