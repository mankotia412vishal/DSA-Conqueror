#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr1[]={2,4,6};
    int arr2[]={3,5,7,9,11};
    int n1=3;
    int n2=5;
    int i=0,j=0;
    vector<int> ans;
    while (i<n1 && j<n2)
    {
       if(arr1[i]<arr2[j]){
        ans.push_back(arr1[i]);
        i++;
       }
       else{
        ans.push_back(arr2[j]);
        j++;
       }
    }
    while (i<n1)
    {
        ans.push_back(arr1[i++]);
    }
    
    while (j<n2)
    { 
        ans.push_back(arr2[j++]);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;

}