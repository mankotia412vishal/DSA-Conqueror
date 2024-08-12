#include <bits/stdc++.h>
using namespace std;
int main()
{

    int maxi = INT_MIN, secondMax = INT_MIN;
    vector<int> arr{1, 4, 2, 13, 15,1};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxi)
        {
            secondMax = maxi;
            maxi = arr[i];
        }
        else if(arr[i]>secondMax){
            secondMax=arr[i];
        }
    }

    cout << maxi << " --> " << secondMax << endl;
    return 0;
}