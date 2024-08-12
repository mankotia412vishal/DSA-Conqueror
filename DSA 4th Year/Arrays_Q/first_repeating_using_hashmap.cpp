#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{1, 5, 3, 4, 3, 5, 6};
    int i=0,j=arr.size()-1;
    map<int,int> mp;
    for (int  i = 0; i < arr.size(); i++)
    { 
        mp[arr[i]]++;
    }
    cout<<mp[arr[0]]<<" \n";
    for (int i=0;i<j;i++)
    {
        if(mp[arr[i]]>1){
            cout<<i+1<<" ";
             break;
        }
    }
    
    
    
  
    
    return -1;

}