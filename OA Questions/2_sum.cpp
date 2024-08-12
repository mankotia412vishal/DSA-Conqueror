#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[3]={-8,10,-10};
    for(int i=0;i<3;i++){
        int s=0;
        for(int j=i+1;j<3;j++){
            s+=arr[j];
        }
        cout<<s+arr[i]<<endl;
    }


    return 0;

}