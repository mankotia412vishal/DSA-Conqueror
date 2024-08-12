#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    
    while (i<=n)
    {
        int spaces=n-i;
        while (spaces)
        {
           cout<<" ";
           spaces--;
        }
        int j=1;
        while (j<=i)
        {
           cout<<"* ";
           j++;
        }
        // cin.get();
        i++;
        cout<<"\n";
        
    }
    

}