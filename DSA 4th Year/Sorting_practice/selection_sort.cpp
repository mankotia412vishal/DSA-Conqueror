#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[5]={3,1,3,5,4};
    // selection sort
    int n=5;
    for (int i = 0; i < n; i++)
    {
        int mini=i;
        for (int  j = i+1; j < n; j++)

        {
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        // swap
        swap(arr[i],arr[mini]);
        
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
    
    return 0;

}