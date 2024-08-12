#include <bits/stdc++.h>
using namespace std;
int validArr(vector<int> &arr, int s, int e)
{
    unordered_map<int, int> mp;
    int ans;
    for (int i = s; i < e; i++)
    {
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        cout << i.first << "--> " << i.second << endl;
    }
    cout << "Khatam\n";
    for (int i = s; i < e; i++)
    {
        if (mp[arr[i]] > 1)
        {
            ans = mp[arr[i]];
            cout << ans << "--> " << mp[arr[i]] << endl;
        }
    }
    mp.clear();
    return ans;
}

int minimumIndex(vector<int> &nums)
{
    unordered_map<int,int> mp;
    for (int  i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
int max=INT_MIN;
int k=0;
    for (auto i: mp)
    {
       if(i.second >=max){
        max=i.second;
        k=i.first;
       }

    }
    int m=max/2;
    
    
    int e= nums.size()-1;
    int c=0;
    for (int  i = e; i >=0; i--)
    {
        if(nums[i]==k){
            c++;
        }
         
    }
    int start=e-m;
    int st=0;
     
     int ans1 = validArr(nums, st, start);
        int arr1size = (m - st) + 1;
        int ans2 = validArr(nums, m + 1, e);
        int arr2size = e - m;
        if (ans1 * 2 > arr1size && ans2 * 2 > arr2size)
            return m;
    }



 
int main(){

 

    // vector<int> arr{2,1,3,1,1,1,7,1,2,1};
    vector<int> arr{1, 2, 2, 2};
    cout << minimumIndex(arr) << endl;

    return 0;
}
 