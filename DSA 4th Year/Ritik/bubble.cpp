#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={10,1,9,2,4,6};
    int n=6;
    
    for (int  i = 1; i < n; i++)
    {
        bool swapped=false;
       for (int  j = 0; j < n-i; j++)
       {
         if(arr[j]>arr[j+1]){
            swapped=true;
            swap(arr[j+1],arr[j]);
         }
        
       }
       if(swapped==false){
        break;
       }
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    
    return 0;

}