#include <bits/stdc++.h>
using namespace std;
void Subarray(vector<int>&arr,int start,int end){

    // base case
    if(end==arr.size()) return;

    // ek case solve kar lunga
    for (int  i = start; i <= end; i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<"\n";
    

    // RR
    Subarray(arr,start,end+1);
    

}
void NextSubArray(vector<int>&arr){
    for (int  i = 0; i < arr.size(); i++)
    {
        int end=i;
        Subarray(arr,i,end);
        
    }
    

}
int main(){

    vector<int>arr{1,2,3,4,5};
    int start=0,end=start;
    // Subarray(arr,start,end);
    NextSubArray(arr);
    return 0;

}