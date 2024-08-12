/*

Airlift

You and your family are trapped on a flood prone island. When you called the emergency services to ask for assistance, they promised to send aircraft to airlift your familly. As long as the combined weight of the two passengers is less than or equal to K. each aircraft is only permitted to carry a maximum of K and a maximum of two other passengers in addition to the plot. You are given the following:

The maximum capacity of the aircraft

The total number of family members

An array weights, where weights[i] represent the weight of

the family member

Task

Task

Return the minimum number of aircraft required to airlift the family.

If not possible, return -1

Example

Assumptions

K-5

N-9

weights-[3,3,5,2,1,4,5,1,5]

6 aircraft are required with weights [3,2] [3,1] [4,1] [5] [5] [5].


Function description

Complete the Solve function provided in the editor below. This function takes the following 3 arguments and returns the maximum points you can get

•K Represents the maximum weight capacity of the aircraft

N: Represents the total number of family members

weights Represents the weight of family members

Input format

The first line contains an integer K denoting the

maximum weight capacity of the aircraft

The second line contains an integer N denoting the total

number of family members.

The thard line contains N space-separated integers

representing the weight of family members

Output Format

Return the minimum number of aircraft required to airlift the family.

input sample

6
4
3 5 4 3


output is 3

explanation are [3,3] [4] [5]



*/

#include <bits/stdc++.h>
using namespace std;

int solve(int k, vector<int> weights)
{
    int n = weights.size();
    sort(weights.begin(), weights.end());
    int ans = 0;
    int i = 0;
    while (i < n)
    {
        if (weights[i] > k)
        {
            return -1;
        }
        else if (weights[i] == k)
        {
            ans++;
            i++;
        }
        else
        {
            if (i + 1 < n && weights[i] + weights[i + 1] <= k)
            {
                ans++;
                i += 2;
            }
            else
            {
                ans++;
                i++;
            }
        }
    }
    return ans;
}


int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    vector<int> weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    cout << solve(k, weights);
    return 0;
\
















    unordered_map<long long, long long> m;
    for (int i = 0; i < M; i++)
    {
        m[price[0][i]]++;
    }
    for (int  i = 1; i < N; i++)
    { 
        unordered_map<long long, long long> mp;
        for (int j = 0; j < M; j++)
        {
           for (auto pric: m)
           {
             mp[pric.first+price[i][j]]++;
           }
           
        }
        m=mpp;
    }
    long long ans=INT_MAX;
    for (auto i : m)
    {
        ans=min(ans,abs(K-i.first));
    }
    return ans;
}




 
