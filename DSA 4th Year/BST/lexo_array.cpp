#include <vector>
#include <set>
#include <iostream>

using namespace std;

vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
    multiset<int> window;
    vector<int> result(nums.begin(), nums.end());

    int left = 0;
    int right = 0;
    int n = nums.size();

    while (right < n) {
        window.insert(nums[right]);

        while (*window.rbegin() - *window.begin() > limit) {
            window.erase(window.find(nums[left]));
            left++;
        }

        if (right - left + 1 == window.size() && vector<int>(window.begin(), window.end()) < result) {
            result = vector<int>(window.begin(), window.end());
        }

        right++;
    }

    return result;
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 5, 3, 9, 8};
    int limit1 = 2;
    vector<int> result1 = lexicographicallySmallestArray(nums1, limit1);
    cout << "Example 1 Output: [";
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i];
        if (i < result1.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    // Example 2
    vector<int> nums2 = {1, 7, 6, 18, 2, 1};
    int limit2 = 3;
    vector<int> result2 = lexicographicallySmallestArray(nums2, limit2);
    cout << "Example 2 Output: [";
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i];
        if (i < result2.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    // Example 3
    vector<int> nums3 = {1, 7, 28, 19, 10};
    int limit3 = 3;
    vector<int> result3 = lexicographicallySmallestArray(nums3, limit3);
    cout << "Example 3 Output: [";
    for (int i = 0; i < result3.size(); i++) {
        cout << result3[i];
        if (i < result3.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
