#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr{3,1,3,4,2};
     
     for (int i = 0; i < arr.size(); i++)
     {
        int index=abs(arr[i]);
        if(arr[index]<0){
            cout<<index<<" ";
        }
        else{
            arr[index]*=-1;
        }
     }
     
    
}