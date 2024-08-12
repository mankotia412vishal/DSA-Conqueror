#include <bits/stdc++.h>
using namespace std;
int main(){
      vector<int> arr{1,2,3,4,5};
      int n=5,d=2;

    
      vector<int> t(d);
        for(int i=0;i<d;i++){
            t[i]=arr[i];
        }
         
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
         for (auto i :arr)
        {
            cout<<i<<" ";
        }
        cin.get();
        int j=0;
        for(int i=n-d;i<n;i++){
            arr[i]=t[j++];
        }
        for (auto i :arr)
        {
            cout<<i<<" ";
        }
        
    return 0;

}