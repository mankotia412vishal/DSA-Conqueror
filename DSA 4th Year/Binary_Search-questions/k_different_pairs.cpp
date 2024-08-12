#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{3,1,4,0,5};
    int c=0,k=2;
    for (int  i = 0; i < arr.size(); i++)
    {
        for (int  j = i+1; j <  arr.size(); j++)
        {
           if(abs(arr[i]-arr[j])==k &i!=j){
            c+=1;
            cout<<"("<<arr[i]<<","<<arr[j]<<")\n";
           }
        }
        
    }
    cout<<c<<endl;
    return 0;

}