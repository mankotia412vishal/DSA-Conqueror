#include <bits/stdc++.h>
using namespace std;
  vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        
        int i=0,j=0;
        vector<int> ans;
        cout<<"Vishal\n";
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        while(i<v1.size() && j<v2.size()){
            if(v1[i]==v2[j]){
                cout<<v1[i]<<" "<<v2[j]<<"\n";
                ans.push_back(v1[i]);
                i++,j++;
            }
            else if(v1[i]<v2[j]) i++;
            else j++;
        }
        return ans;
    }

int main(){
/*
n = 5
v1[] = {3, 4, 2, 2, 4}
m = 4
v2[] = {3, 2, 2, 7}
*/
    vector<int> v1{3, 4, 2, 2, 4};
    vector<int> v2{3, 2, 2, 7};
    vector<int> ans=common_element(v1,v2);
    for(auto i:ans){
        cout<<i<<" ";
    }

    
    return 0;

}