#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> fre{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};
    sort(fre.begin(), fre.end());
    for (auto i:fre)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int j = 0;
    for (int i = 0; i < fre.size(); i++)
    {
       
        if (fre[j] != fre[i])
        {
            //  cout<<"jgd\n";
             int test=i-j;
            if (test == 1)
            {
                cout << fre[j];
            }
            j=i;         
        }
        
    }
    return 0;
}