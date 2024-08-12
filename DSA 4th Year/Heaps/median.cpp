#include <bits/stdc++.h>
using namespace std;
int signum(int a, int b)
{
   if (a == b)
        return 0;
      if (a > b)
        return 1;
   if(a<b)
        return -1; 
}
void callMedian(int &median, priority_queue<int, vector<int>, greater<int>> &minHeap, priority_queue<int> &maxHeap, int element)
{

    switch (signum(minHeap.size(),maxHeap.size()))
    {
    case 0:
        if (element > median)
        {
            minHeap.push(element);
            median = minHeap.top();
        }
        else
        {
            maxHeap.push(element);
            median = maxHeap.top();
        }

        break;
    
    case -1:
    if (element > median)
        {
            minHeap.push(element);
            median = (minHeap.top() + maxHeap.top()) / 2;
        }
        else
        {
            int maxTop = maxHeap.top();
            maxHeap.pop();
            minHeap.push(maxTop);
            maxHeap.push(element);
            median = (minHeap.top() + maxHeap.top()) / 2;
        }
        break;

        case 1:
        if (element > median)
        {
            int maxTop = minHeap.top();
            minHeap.pop();
            maxHeap.push(maxTop);
            minHeap.push(element);
            median = (minHeap.top() + maxHeap.top()) / 2;
        }
        else
        {
            maxHeap.push(element);
            median = (minHeap.top() + maxHeap.top()) / 2;
        }
        break;

    }


   

    
}
int main()
{

    int arr[6] = {5, 7, 2, 9, 3, 8};
    int n = 6;

    int median = 0;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
    {
        int element = arr[i];

        callMedian(median, minHeap, maxHeap, element);
        cout << " -> " << median << endl;
    }

    return 0;
}