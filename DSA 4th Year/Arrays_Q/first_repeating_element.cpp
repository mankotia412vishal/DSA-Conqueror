#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{1, 5, 3, 4, 3, 5, 6};
    int i=0,j=arr.size()-1;
    while (i<j)
    { 
        if(arr[i]!=arr[j]){
            j--;
        }
         else{
            cout<<i+1<<endl;
            break;
        }
        if(i==j){
            i++,j=arr.size()-1;
        }
       
    }
    
    return 0;

}