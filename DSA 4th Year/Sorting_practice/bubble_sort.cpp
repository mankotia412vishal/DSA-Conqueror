#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[6]={10,1,9,2,4,6};
    int n=sizeof(arr)/sizeof(int);
    // cout<<n<<endl;
    for (int i =0; i <n ; i++)
    {
        bool swapped=false;
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                swapped=true;
                swap(arr[j-1],arr[j]); 
            }

        }
        cout<<"\nprinting the array after pass "<<i<<endl;
        for(auto x:arr){
        cout<<x<<" ";
    }

        if(!swapped){
            break;
        }
    }
     cout<<"\nprinting the array after pass \n";
    for(auto x:arr){
        cout<<x<<" ";
    }
    
    return 0;

}