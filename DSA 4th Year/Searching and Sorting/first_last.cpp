#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = 9, x = 5;

    vector<int> ans;
    int s = 0, e = n - 1, no = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == x)
        {
            no = mid;
            e = mid - 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
         mid = s + (e - s) / 2;

    }
    cout << no << endl;
    cin.get();
    ans.push_back(no);
    //  last occurence
    s = 0, e = n - 1, no = -1;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == x)
        {
            no = mid;
            s = mid + 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
         mid = s + (e - s) / 2;
    }
    ans.push_back(no);
    for (auto i : ans)
    {
        cout << i << " " << endl;
    }
 
    


    return 0;
}