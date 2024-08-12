#include <bits/stdc++.h>
using namespace std;
int getKthGreatestElement(int arr[], int n, int k)
{
    // step 1 create a min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    // step 2 insert k elements of array

    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // step 3 if elements are greater than top element then only push
    for (int i = k; i < n; i++)
    {
        int element = arr[i];
       
        if (element > pq.top())
        { cout<<" Vishal "<<element<<" ";
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
}
int getKthSamllest(int arr[], int n, int k)
{
    // step 1 create a max heap
    priority_queue<int> pq;

    // step 2 insert k elements of array

    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // step 3 if elements are less than top element then only push
    for (int i = k; i < n; i++)
    {
        int element = arr[i];
        if (element < pq.top())
        {
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
}
int main()
{

    // int arr[] = {10, 5, 20, 4, 15};
    int arr[] = {10, 8, 70, 90, 4,60,1};
    int n = 7;
    int k = 3;

    int ans = getKthSamllest(arr, n, k);
    cout << "Answer is " << ans << endl;
    cout << "Answer is " << getKthGreatestElement(arr,n,k) << endl;
    return 0;
}