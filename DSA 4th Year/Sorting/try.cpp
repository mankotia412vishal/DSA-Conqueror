#include <bits/stdc++.h>
using namespace std;
int main(){

   vector<int> arr{1,2,3,4,5};
    int maxi=INT_MIN,secondMax=INT_MIN;
   for (int i = 0; i < arr.size(); i++)
   {
      if(arr[i]>maxi){
         secondMax=maxi;
        maxi=arr[i];
      }

   }
      cout<<"Second Max  "<<secondMax<<"  --> "<<maxi<<endl;
    return 0;

}