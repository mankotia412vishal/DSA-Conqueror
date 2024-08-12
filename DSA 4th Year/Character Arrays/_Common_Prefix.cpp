#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<string>strs {"flower","flow","flight"};
    int n=strs.size();
    // cout<<n<<endl;
    // while (1)
    // {
    //     for (int  i = 0; i < n; i++)
    //     {
    //         cout<<strs[i]<<" ";
    //     }
    //     cout<<"\n";
    //     break;
    // }
    int j=0;
    while (1)
    {
       char curr_ch=0;
    
     
    for (auto str: strs)
    {
        if( curr_ch==0){
            curr_ch=str[j];
            
        }
        
        
    }
    

    j++;

      break;
    }
    return 0;

}