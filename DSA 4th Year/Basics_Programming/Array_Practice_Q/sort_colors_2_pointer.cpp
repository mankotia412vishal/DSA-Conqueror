#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{1,0,2,0,1,0,2,1,1,0,1,2};

    int i=0,s=0,e=arr.size()-1;
    while (i<=e)
    {
        if(arr[i]==0){
            swap(arr[i],arr[s]);
            i++,s++;
        }
        else if(arr[i]==1){
            i++;
        }
        else{
            swap(arr[i],arr[e]);
            e--;
        }
    }
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    
    
    return 0;

}