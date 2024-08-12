#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    vector<int> nums1 = {7, 9, 1, 4};
    vector<int> nums2 = {0, 8};
    int n1 = nums1.size();
    int n2 = nums2.size();

    int min_diff = INT_MAX;
    for (int i = 0; i < n1; i++) {
        for (int j = i + 1; j < n1; j++) {
            vector<int> temp_nums1;
            for (int k = 0; k < n1; k++) {
                if (k != i && k != j) {
                    temp_nums1.push_back(nums1[k]);
                }
            }

            // Calculate the difference between temp_nums1 and nums2
            int diff_sum = 0;
            for (int k = 0; k < n2; k++) {
                diff_sum += abs(temp_nums1[k] - nums2[k]);
            }

            min_diff = min(min_diff, diff_sum);
        }
    }

    cout << min_diff << endl;

    return 0;
}
