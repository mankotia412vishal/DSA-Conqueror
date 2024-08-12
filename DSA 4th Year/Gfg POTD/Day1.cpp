#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={3,4,1,5};
    int p=0;

    for (int  i = 1; i < 4; i++)
    {
        if(arr[i]>arr[i-1]){
             p+=arr[i]-arr[i-1];

        }
    }
    cout<<p<<endl;
    
}