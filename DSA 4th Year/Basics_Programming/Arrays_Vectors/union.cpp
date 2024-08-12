#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){

    vector<int> t{1,2,3,4,5};
    vector<int> t1{1,2,3};
    vector<int> t2;
    unordered_map<int,int> freq;
    cout<<t[t.size()-2]<<endl;
    cin.get();
    for (int  i = 1; i < t.size(); i++)
    {
        if(t[i]!=t[i-1]){
             t2.push_back(t[i-1]);    
        }
        if( t[t.size()-1]!=t[t.size()-2]){
             t2.push_back(t[t.size()-1]);    
        }
      
    }
    for (int  i = 1; i < t1.size(); i++)
    {
        
        if(t1[i]!=t1[i-1]){
        t2.push_back(t1[i]);    
        }
       
    }
    for (int  i = 0; i < t2.size(); i++)
    {
        cout<<t2[i]<<" ";
    }
    

}