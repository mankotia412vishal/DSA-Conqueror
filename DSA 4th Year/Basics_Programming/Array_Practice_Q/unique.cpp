#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{1,2,4,2,1,3,6,5,5,6,4};
    sort(arr.begin(),arr.end());
    int j=0;
    for (int  i = 0; i < arr.size(); i++)
    {
       if(arr[i]!=arr[j]){
        if(i-j==1){
            cout<<arr[j]<<endl;
            break;
        }
         j=i;
       }
     
    }
    
    return 0;

}