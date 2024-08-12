#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{10,1,9,2,4,6};

    for (int round   = 1; round < arr.size(); round++)
    {
        bool swaped=false;
        for (int j = 0; j < arr.size()-round; j++)
        {
            if(arr[j]>arr[j+1]){
                swaped=true;
                swap(arr[j+1],arr[j]);
            }
        }
        if(swaped==false) break;
    }
    for (auto i :arr)
    {
      cout<<i<<" ";
    }
    
    return 0;

}

