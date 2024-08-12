#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{1,2,3,4,5};
    int mx=0,no1,no2;
    for (int  i = 0; i < arr.size()-1 ; i++)
    {
       int sum=arr[i]+arr[i+1];
       if(sum>mx){
        mx=sum;
        no1=i,no2=i+1;
       }
    }
    cout<<"First no is "<<arr[no1]<<" -->" <<arr[no2]<< " "<<mx<<endl; 
    
    return 0;

}