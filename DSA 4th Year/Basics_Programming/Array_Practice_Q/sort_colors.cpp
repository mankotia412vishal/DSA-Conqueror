#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{1,0,2,0,1,0,2,1,1,0,1,2};
    int one=0,two=0,zero=0;
    for (int  i = 0; i < arr.size(); i++)
    {
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
        if(arr[i]==2){
            two++;
        }
    }
    cout<<zero<<"--> "<<one<<"--> "<<two<<endl;
    int i=0,j=zero,k=one+zero;
    while (zero!=0)
    {
        arr[i]=0;
        i++;
        zero--;
    }
  
    while (one!=0)
    {
        arr[j]=1;
        j++;
        one--;
    }
      
    while (two!=0)
    {
        arr[k++]=2;
        two--;
    }
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    

    return 0;

}