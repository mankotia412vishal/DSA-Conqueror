#include <bits/stdc++.h>
using namespace std;
int StricltyInc(vector<int> ans)
{
    int len = 1;
    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i - 1] < ans[i])
        {
            len++;
        }
        else
        {
            break;
        }
    }
    return len;
}
int StricltyDec(vector<int> ans)
{
    int len = 1;
    for (int i = ans.size()-1; i >= 1; i--)
    {
        if (ans[i]< ans[i-1]) {  // Check for strictly decreasing
            len++;
        } else {
            break;
        }
    }
    return len;
}
int main()
{

    int arr[4] = {3, 3, 3, 3};
    // int arr[5] = {1, 4, 3, 3, 2};
    vector<int> ans;
    int maxlen = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            ans.clear(); 
            for (int k = i; k <= j; k++)
            {
                ans.push_back(arr[k]);
            }
            int len1 = StricltyInc(ans);
            int len2 = StricltyDec(ans);
           
            maxlen = max(maxlen,max(len1, len2));
        }
       
    }
    
    cout << maxlen << endl;
    return 0;
}