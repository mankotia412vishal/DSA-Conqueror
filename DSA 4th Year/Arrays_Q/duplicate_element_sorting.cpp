#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr{3,1,3,4,2};
    // vector<int> arr{1, 3, 4, 2, 2};
    sort(arr.begin(),arr.end());
    for (int  i = 1; i < arr.size(); i++)
    {
        if(arr[i]==arr[i-1]){
            cout<<arr[i]<<" ";
        }
    }
    
}