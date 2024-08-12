#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int ans = 0;
    // int arr[] = {8, 6, 1, 5, 3};
    // // int arr[] = {5,4,8,7,10,2};
    // // int arr[] = {6,5,4,3,4,5};
   

    // int n = 5; 
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //           if(arr[i]>arr[j]) break;
    //             if(arr[i]<arr[j] &&arr[k]<arr[j]){
    //                 if(ans==0){
    //                     ans=arr[i]+arr[j]+arr[k];
    //                 }
    //                 ans=min(ans,arr[i]+arr[j]+arr[k]);
    //                 // ans+=arr[i]+arr[j]+arr[k];
    //             }
                  
    //         }
    //     }
    // }
    // if(ans==0) cout<<-1<<endl;
    // else
    // cout<<ans<<endl;

// optimise the above code using unordered_map

    int ans = 0;
    // int arr[] = {8, 6, 1, 5, 3};
     int arr[] = {6,5,4,3,4,5};

    int n = 6;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > 1)
        {
            mp[arr[i]]--;
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (mp[arr[j]] > 1)
            {
                mp[arr[j]]--;
                continue;
            }
            for (int k = j + 1; k < n; k++)
            {
                if (mp[arr[k]] > 1)
                {
                    mp[arr[k]]--;
                    continue;
                }
                if (arr[i] < arr[j] && arr[k] < arr[j])
                {
                    if (ans == 0)
                    {
                        ans = arr[i] + arr[j] + arr[k];
                    }
                    ans = min(ans, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }


    if (ans == 0)
        cout << -1 << endl;
    else
        cout << ans << endl;




 
    


     


    return 0;
}