#include <bits/stdc++.h>
using namespace std;
int main(){

     
    vector<int> fre{1,2,4,2,1,3,6,5,5,6,4};
    // vector<int> fre{1,2,4,2,4};
    // sort(fre.begin(),fre.end());
     for (int  i = 0; i < fre.size(); i++)
     {
        // int k=fre[i];
        // bool isunique=true;
       for (int  j = 0; j < fre.size(); j++)
       {
        // cout<<fre[i]<<"---> "<<fre[j]<<endl;
        if(fre[i]==fre[j] &&i!=j){
            break;
        }
         
            if(j==fre.size()-1){
                cout<<fre[i]<<" ";
                // exit(0);
                break;
                 
            }
           
        }

        
        
       }
      
      
 
    

}