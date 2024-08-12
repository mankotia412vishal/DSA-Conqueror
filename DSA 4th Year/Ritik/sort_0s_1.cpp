#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={2,0,2,1,1,0};
    int n=6;
    int one=0,zero=0,two=0;
    for (int  i = 0; i < n; i++)
    {
       if(arr[i]==0){
        zero++;
       }
       else if(arr[i]==1){
       one++;
       }
       else{
            two++;
       }
        
    }
    cout<<"zeros "<<zero<<" "<<"one "<<one<<"  two "<<two<<endl;
    int i=0;
    while (zero!=0)
    {
        arr[i]=0;
        i++;
        zero--;
    }
    while(one!=0){
        arr[i++]=1;
        one--;
    }
    while (two!=0)
    {
       arr[i++]=2;
       two--;
    }
    
    for(auto no:arr){
        cout<<no<<" ";
    }
    

    return 0;

}