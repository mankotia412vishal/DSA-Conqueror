#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>  arr{1,2,-3,4,-5,6};

    int s=0,e=arr.size()-1;
    while (s<=e)
    {
       if(arr[s]<0){
        s++;
       }
       else if(arr[e]>0){
        e--;
       }
       else{
        swap(arr[s],arr[e]);
       }
    }
    for (auto i : arr)
    {
       cout<<i<<" ";
    }
    
    
    return 0;

}