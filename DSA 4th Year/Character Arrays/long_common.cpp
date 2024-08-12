#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> strs = {"lflower", "flow", "flight"};
    string ans = "";
    int i = 0;
    while (1)
    {
        char curr_ch = 0;
        for (auto str : strs)
        {
            if(str.size()<=i){
            curr_ch=0; break;
            } 
            
            if(curr_ch==0){
                curr_ch=str[i];
            }
            else if(curr_ch!=str[i]){
                
                curr_ch=0;
                break;
            }
        }
         if(curr_ch==0){
            break;

         }
         ans.push_back(curr_ch);
         i++;
    }
        cout<<"ans "<<ans<<endl;
    return 0;
}