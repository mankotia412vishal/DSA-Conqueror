#include <bits/stdc++.h>
using namespace std;
void  Solve(vector<int>arr,int sum,int &maxi,int i){
    // base case 
    if(i>=arr.size()){
        // maxi ko update
        maxi=max(sum,maxi);
        
        return ;

    }
    // include
    Solve(arr,sum+arr[i],maxi,i+2);

    //exclude
 Solve(arr,sum,maxi,i+1);

}
int main(){

    vector<int>arr{2,1,4,9};
    int sum=0;
    int maxi=INT_MIN;
    int i=0;

    Solve(arr,sum,maxi,i);
    cout<<maxi<<endl;
    return 0;

}