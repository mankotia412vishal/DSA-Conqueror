#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr1[4]={1,3,5,7};
    int arr2[5]={0,2,6,8,9};

    int i=3,j=0;
    while (i>=0 && j<5)
    {
        if(arr1[i]> arr2[j]){
            swap(arr1[i],arr2[j]);
            j++;
            i--;
        }
       
    }
    sort(arr1,arr1+3);
    sort(arr2,arr2+5);
    
    
    return 0;

}