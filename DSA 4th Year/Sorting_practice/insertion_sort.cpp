#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[6]={10,1,10,10,4,6};
    int n=sizeof(arr)/sizeof(int);
    // cout<<n<<endl;
    for (int i =1; i <n ; i++)
    {
        // step 1 fetch
        int val=arr[i];
        int  j = i-1;
        for (; j >= 0; j--)
        {
            // step2 compare
            if(arr[j]>val){
                // step 3 shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }

        // step 4 copy
        arr[j+1]=val;

        cout<<"\nprinting the array after pass "<<i<<endl;
        for(auto x:arr){
        cout<<x<<" ";
    }

        
    }
     cout<<"\nprinting the array after pass \n";
    for(auto x:arr){
        cout<<x<<" ";
    }
    
    return 0;

}