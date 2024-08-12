#include <bits/stdc++.h>
using namespace std;
vector<int> recamanSequence(int n)
{
    // code here
    vector<int> ans;
    int prev = 0;
    ans.push_back(prev);
    for (int i = 1; i < n; i++)
    {
        int next = prev - i;
        if (next <= 0)
        {
            int sol = prev + i;
           
            ans.push_back(sol);
            prev = sol;
             cout << " printing the ans for -- " << i << " value is " << sol<<  " and its prev is "<<prev << endl;
            cin.get();
        }
        else
        {
           
            ans.push_back(next);
            prev = next;
             cout << " printing the ans for " << i << " value is " << next <<  " and its prev is "<<prev<<endl;
            cin.get();
        }
    }
    return ans;
}
int main()
{

    int n = 8;
    vector<int> ans = recamanSequence(n);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}