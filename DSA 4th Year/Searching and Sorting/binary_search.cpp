#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{11, 22, 33, 44, 55};
    

    int s = 0, e = arr.size() - 1, k = 11;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            cout << "Element is present at index --> " << mid << endl;
            break;
        }
        else if (arr[mid] < k)
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }

    return -1;
}