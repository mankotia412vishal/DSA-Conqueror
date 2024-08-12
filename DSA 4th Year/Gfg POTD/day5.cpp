#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> ans{1,2,3,4,5};
    // vector<int> ans{0,-10,1,3,-20};
    sort(ans.begin(),ans.end());

    int pv=1;
    for (int  i = 0; i < ans.size(); i++)
    {
        if(ans[i]> 0 && ans[i]==pv){
            pv++;
             
        }
        // else{
             
        //     break;
        // }
         
        
        
         
    }
    cout<<pv<<endl;
    return 0;

}