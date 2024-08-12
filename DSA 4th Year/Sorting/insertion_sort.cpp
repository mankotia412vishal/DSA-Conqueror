#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{10, 1, 2, 3, 9, 5, 4};

    for (int i = 1; i < arr.size(); i++)
    {
        // step 1 fetch
        int val = arr[i];
        int j = i - 1;
        //  step 2 Compare
        for (; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                // step 3 shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        //  step 4 copy
        arr[j + 1] = val;
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}