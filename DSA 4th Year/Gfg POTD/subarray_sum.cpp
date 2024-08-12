#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    // int arr[]={1,2,3,7,5};
    // int   N = 5, S = 12;
    int  N = 10, S = 15;
    for (int  i = 0; i < N; i++)
    {
       for (int  j = 1; j <=N; j++)
       {
        int ans=0;
       for (int  k = i; k< j; k++)
       {
        ans+=arr[k];
         if(ans==S){
        cout<<i+1<<" "<<j<<endl;
        exit(1);
       }
        
       }
       
        // cout<<"\n";
       
       }
      
       
    }
    
    
  
   
    
    return 0;

}