#include <bits/stdc++.h>
using namespace std;
int main(){
    // cout<<(1^3)<<endl;


    int arr[5]={1,3,3,2,6};
    for (int  i = 1; i < 5; i++)
    {
        if((arr[i]^arr[i-1])==0){
            cout<<arr[i]<<endl;
            break;
        }
        // cout<<"No in Binary "<<(arr[i]^arr[i-1])<<endl;
    }
    
    return 0;

}