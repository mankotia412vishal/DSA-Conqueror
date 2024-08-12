#include <bits/stdc++.h>
using namespace std;
int main(){

     int arr[6] = {10, 1, 9, 2, 4, 6};
    int n = 6;
    for (int  i = 1; i < n; i++)
    {
        // step1 fetch
       int val=arr[i];
       int  j = i-1;
       for (; j>=0; j--)
       {
        //  step 2 compare
        if(arr[j]>val){
            // step 3 shift
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
       }
    //    step 4 copy
       arr[j+1]=val;
       
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;

}