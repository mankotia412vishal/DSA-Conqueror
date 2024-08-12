#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{2,1,1};
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {

        int index = abs(arr[i]);
        if (arr[index] < 0)
            ans = index;
        arr[index] *= -1;
    }
    cout << ans << endl;
    return 0;
}


