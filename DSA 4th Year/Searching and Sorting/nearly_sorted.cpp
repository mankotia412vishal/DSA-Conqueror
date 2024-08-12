#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{10, 3, 40, 20, 50, 80, 90};
    int s = 0, e = arr.size() - 1, ss = arr.size() - 1;
    int mid = s + (e - s) / 2, t =90;

    while (s <= e)
    {
        if (arr[mid] == t)
        {
            cout << mid << " \n";
            break;
        }
        if (mid - 1 >= 0 && arr[mid - 1] == t)
        {
            cout << mid - 1 << " \n";
            break;
        }
        if (mid + 1 <= ss && arr[mid + 1] == t)
        {
            cout << mid + 1 << " \n";
            break;
        }
        else if (arr[mid] < t)
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    
    return 0;
}