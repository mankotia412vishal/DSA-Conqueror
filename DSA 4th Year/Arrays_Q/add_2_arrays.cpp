#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> a{9,5,4,9};
    vector<int> b{2,1,4};
    // vector<int> a{1,2};
    // vector<int> b{2,1};
    string ans;
    int c=0;
    int i=a.size()-1;
    int j=b.size()-1;
    while (j>=0 && i>=0)
    {
        int x=a[i]+b[j]+c;
        int digit=x%10;
        ans.push_back(digit+'0');
        c=x/10;
        j--,i--;


    }
    while (i>=0)
    {
        int x=a[i]+0+c;
        int digit=x%10;
        ans.push_back(digit+'0');
        c=x/10;
         i--;


    }
    while (j>=0)
    {
        int x=0+b[j]+c;
        int digit=x%10;
        ans.push_back(digit+'0');
        c=x/10;
        j--;


    }
    ans.push_back(c+'0');
       while(ans[ans.length()-1]=='0') ans.pop_back();
        reverse(ans.begin(),ans.end());
     
    cout<<ans<<endl;
    return 0;

}