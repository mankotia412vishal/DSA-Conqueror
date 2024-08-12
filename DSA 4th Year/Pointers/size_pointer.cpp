#include <bits/stdc++.h>
using namespace std;
int main(){

    int a=5;
    int *ptr=&a;
    cout<<sizeof(ptr)<<endl;
    int arr[5]={1,2,3,4,5};
    cout<<*arr<<endl;
    cout<<sizeof(arr)<<endl;
    return 0;

}