#include <bits/stdc++.h>
using namespace std;
int main()
{

        vector <int> a1{1,2,3,3,4,6,8};
        vector <int> a2{3,3,4,9,10};
        vector<int> visted(a2.size(),0);
        vector<int> ans;
        for(int i=0;i<a1.size();i++){
            for (int  j = 0; j < a2.size();j++)
            {
                if(a1[i]==a2[j] && visted[j]==0){
                        ans.push_back(a1[i]);
                        visted[j]=1;
                }
                 
            }
            
        }

    for (auto i: ans)
    {
        cout<<i<<" ";
    }
    
        return 0;
}