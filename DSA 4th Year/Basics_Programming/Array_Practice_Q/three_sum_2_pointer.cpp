#include <bits/stdc++.h>
using namespace std;
int main(){

     vector<int> ans;
    vector<int> arr{10,20,30,40,50};
    for (int  i = 0; i < arr.size(); i++)
    {
        int j=i+1,k=arr.size()-1;
        while (j<=k)
        {
            if(arr[i]+arr[j]+arr[k]==80){
               cout<<arr[i]<<" "<< arr[j]<<" "<<arr[k]<<" \n";
            }
            else{
                k--;
            }
            if(j<=k){
                j=j+1;
                k=arr.size()-1;
            }
        }
        
    }
    
    return 0;

}