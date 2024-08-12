#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> a{2,6,5,8,11};
    int j=a.size()-1,i=0,t=14;
    while (i<a.size() )
    {
         if(a[i]+a[j]==t){
                cout<< i<<" -> "<<j<<endl;
                break;
         }
          else{
            j--;
          }
          if(i>=j){
            i++;
            j=a.size()-1;
          }
    }
    
    
    return 0;

}