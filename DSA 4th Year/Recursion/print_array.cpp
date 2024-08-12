#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int i){
    // base case 
    if(i>=n) return ;

    // 1 case solve kar liya

    cout<<arr[i]<<" ";
    print( arr,n,i+1);

}
// void print(int arr[],int n,int i){
//     // base case 
//     if(i>=n) return ;

//     // 1 case solve kar liya

//     cout<<arr[i]<<" ";
//     print( arr,n,i+1);

// }
int main(){

    int arr[5]={1,2,3,4,5};
    int i=0;
    int n=5;
    print(arr,n,i);
    return 0;

}