#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[6]={10,1,4,8,5,7};
    int n=6;

    for (int  round = 0; round <n-1 ; round++)
    {
        int mini=round;
        for (int  i = round+1; i < n; i++)
        {
           if(arr[i]<arr[mini]){
            mini=i;

           }
        }
        swap(arr[mini],arr[round]);
    }

    for (auto i :arr)
    {
        cout<<i<<" ";
    }
    
    
    return 0;

}