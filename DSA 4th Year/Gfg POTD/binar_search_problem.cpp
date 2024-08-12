#include <bits/stdc++.h>
using namespace std;
// int bs(vector<int> arr,int l,int r,int x){
//     // write binary search code
//     int
//     while (l<=r)
//     {
//          if(arr[l]>=x)  l;
//     }

// }
vector<int> printKClosest(vector<int> arr, int n, int k, int x)
{

    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (x > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }

    if (arr[ans] == x)
    {
        s = ans - 1;
        e = ans + 1;
    }
    else
    {
        s = ans - 1;
        e = ans;
    }
    vector<int> sol;
    while (k--)
    {

        
        

         if (abs(arr[s] - x) < abs(arr[e] - x) && s>=0)
        {
            sol.push_back(arr[s]);
            // cout << arr[s] << " ";
            s--;
        }
        else if (abs(arr[s] - x) >= abs(arr[e] - x ) && e<n)
        {
            sol.push_back(arr[e]);
            // cout << arr[e] << " ";
            e++;
        }
        else if (e < n)
        {
            sol.push_back(arr[e++]);
        }
        else if (s >= 0)
        {
            sol.push_back(arr[s--]);
        }
    }
    for (auto i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << " ";
    }
}

int main()
{

    //     N = 13
    // arr[] = {12, 16, 22, 30, 35, 39, 42,
    //          45, 48, 50, 53, 55, 56}
    // K = 4, X = 35
    int n = 5;
    vector<int> arr{1, 2, 3, 6, 10};
    // vector<int> arr{12, 16, 22, 30, 35, 39, 42,
    //                45, 48, 50, 53, 55, 56};
    int k = 3, x = 4;
    // int k = 4, x = 35;
    printKClosest(arr, n, k, x);
    return 0;
}