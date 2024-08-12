#include <bits/stdc++.h>
using namespace std;
int main()
{

    int nums1[3] = {6, 4, 2}, nums2[3] = {9, 7, 5};
    int n = 3;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int rem = nums2[i] - nums1[i];
        ans += rem;
    }
    
    cout<<ans<<endl;
}