#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=25;
    int s=0,e=n-1,d =5,ans=0;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(mid*d==n){
            ans=mid;
            cout<<ans<<endl;
            break;
        }
        if(mid*d<n){
            ans=mid;
             s=mid+1;

        }
        else{
            e=mid-1;
        }
       mid=s+(e-s)/2;  

    }
    cout<<ans<<endl;
    return 0;

}