#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>ans{1,2,3,4};
   vector<int>temp;
    int n=ans.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<=j;k++){
               s+=ans[k];
            }
           temp.push_back(s);
        }
    }
   
   sort(temp.begin(),temp.end());
   int sol=0;
   for(int i=1;i<5;i++){
    sol+=temp[i];
      
     
   }
    return 0;
    

}