#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={5,4,3,2,1,6};
    int n=6;

    for (int  i = 0; i < n-1; i++)
    {
        int mini=i;
        for (int  j = i+1; j < n; j++)
        {
             if(arr[j]<arr[mini]) mini=j;
        }
        swap(arr[mini],arr[i]);
        
    }
    for(auto num:arr){
        cout<<num<<" ";
    }
    
    return 0;

}