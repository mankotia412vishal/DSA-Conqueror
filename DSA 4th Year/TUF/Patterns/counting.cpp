#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int s=1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<s++<<" ";
       }
      cout<<endl;
   }
    return 0;

}