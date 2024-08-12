#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7; // Size of nums array
    int m = 3; // Number of queries

    vector<int> nums{1, 2, 2, 1, 2, 3, 1};
    vector<vector<int>> queries{{1, 2}, {3, 3}, {4, 2}};

    vector<int> vishal;

    vector<int> arr(n, 0); // Initialize array to mark elements
    int c = 0; // Counter to track marked elements

    for (int i = 0; i < m; i++)
    {
        int index = queries[i][0];
        if (arr[index] == 0)
        {
            c += 1;
            arr[index] = 1;
        }

        int iterations = queries[i][1];
        for (int j = 0; j < iterations; j++)
        {
            int smallest = INT_MAX;
            int smallestIndex = -1;
            for (int k = 0; k < n; k++)
            {
                if (arr[k] != 1 && nums[k] < smallest)
                {
                    smallest = nums[k];
                    smallestIndex = k;
                }
            }
            if (smallestIndex != -1)
            {
                arr[smallestIndex] = 1;
                c++;
            }
        }

        int sum = 0;
        for (int s = 0; s < n; s++)
        {
            if (arr[s] != 1)
            {
                sum += nums[s];
            }
        }
        vishal.push_back(sum);
    }

    for(auto i:vishal){
        cout << i << " ";
    }

    return 0;
}
