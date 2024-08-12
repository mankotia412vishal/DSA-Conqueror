#include <bits/stdc++.h>
using namespace std;
int coinChnage(vector<int>arr,int target,int output){

    // base case 

    if(output==target) return 0;
    if(output>target) return INT_MAX;

    int mini=INT_MAX;
    for (int  i = 0; i < arr.size(); i++)
    {
        int ans=coinChnage(arr,target,output+arr[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}
int main()
{

    vector<int> arr{1, 2,3};
    int t = 5;
    int output=0;
    cout << coinChnage(arr, t,output);
    return 0;
}