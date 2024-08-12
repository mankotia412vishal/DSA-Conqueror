#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1 = "";
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            s1 += ch;
        }
        string s2 = "";
        for (int i = 0; i < m; i++)
        {
            char ch;
            cin >> ch;
            s2 += ch;
        }
        int hammingdist = 0;
        for(int i=0;i<m;i++)
        {
            if(s1[i]!=s2[i])
            {
                hammingdist++;
            }
        }
        int len = s1.length();

        for (int i = 0; i < len; i++)
        {

            for (int j = 1; j <= len - i; j++)
                if (s1.substr(i, j).length() == m)
                {
                    string test = s1.substr(i, j);
                    int dis = 0;
                    for (int k = 0; k < m; k++)
                    {
                        if (test[k] == s2[k])
                        {
                            dis++;
                        }
                    }
                    hammingdist = min(hammingdist, dis);
                }
        }
        cout << hammingdist << endl;
    }
}
