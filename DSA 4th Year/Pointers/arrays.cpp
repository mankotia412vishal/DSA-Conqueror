#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    int *ptr=arr;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    

   
    return 0;

}