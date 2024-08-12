#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){

    
    vector<int> ans;
    vector<int> arr{10,20,30,40,50};
    for (int  i = 0; i < arr.size(); i++)
    {
       unordered_map<int,int> mp;
       for (int  j = i+1; j < arr.size(); j++)
       {
                int more=80-arr[i]-arr[j];
                if(mp.find(more)!=mp.end()){
                    cout<<arr[i]<<" "<< arr[j]<<" "<<more<<" \n";
                    
                }  
                
                    mp[arr[j]];
                
       }
       
    }
    
    
}