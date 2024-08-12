#include <bits/stdc++.h>
using namespace std;
class info
{
public:
    int data;
    int row;
    int col;

    info(int val, int r, int c)
    {
        data = val;
        row = r;
        col = c;
    }
};

class Compare
{
public:
    bool operator()(info *a, info *b)

    {
        cout << "a->data: " << a->data << " b->data: " << b->data << endl;
       
        return a->data > b->data;
    }
};

vector<int> mergeKsortedArrays(int arr[][4], int k, int n)
{
    priority_queue<info *, vector<info *>, Compare> minHeap;

    // har array ka first element insert karo
    for (int i = 0; i < k; i++)
    {
        info *temp = new info(arr[i][0], i, 0);
        
        minHeap.push(temp);
       
         
    }
    vector<int> ans;

    while (!minHeap.empty())
    {
        info *temp = minHeap.top();
        int topElment = temp->data;
        int topRow = temp->row;
        int topCol = temp->col;

        minHeap.pop();
        ans.push_back(topElment);

        if (topCol + 1 < n)
        {
            info *newNode = new info(arr[topRow][topCol + 1], topRow, topCol + 1);
            minHeap.push(newNode);
        }
    }

    return ans;
}
int main()
{

    int arr[][4] = {{2, 4, 6, 8}, {1, 3, 5, 7}, {0, 9, 10, 11}};

    int k = 3;
    int n = 4;

    vector<int> ans = mergeKsortedArrays(arr, k, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}