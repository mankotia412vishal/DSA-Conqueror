#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={2,3,1,2,3};
    int n=5;
    vector<int> v;

    for (int  i = 0; i < n; i++)
    {
       int index=abs(arr[i]);
       if(arr[index]<0){
           v.push_back(index);
       }
       else{
           arr[index]*=-1;
       }

    }
    if(v.size()==0){
        v.push_back(-1);
        cout<<"No duplicates found"<<endl;
    }
    else{
        for (int  i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}