#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long MOD = 1000000007;

struct Node
{
    long long sum;
};

vector<Node> segmentTree;

void buildSegmentTree(const vector<int> &arr, int idx, int left, int right)
{
    if (left == right)
    {
        segmentTree[idx].sum = arr[left];
        return;
    }

    int mid = left + (right - left) / 2;
    buildSegmentTree(arr, 2 * idx + 1, left, mid);
    buildSegmentTree(arr, 2 * idx + 2, mid + 1, right);
    segmentTree[idx].sum = segmentTree[2 * idx + 1].sum + segmentTree[2 * idx + 2].sum;
}

void updateSegmentTree(int idx, int left, int right, int pos, int newVal)
{
    if (left == right && left == pos)
    {
        segmentTree[idx].sum = newVal;
        return;
    }

    int mid = left + (right - left) / 2;
    if (pos <= mid) 
    {
        updateSegmentTree(2 * idx + 1, left, mid, pos, newVal);
    }
    else
    {
        updateSegmentTree(2 * idx + 2, mid + 1, right, pos, newVal);
    }
    segmentTree[idx].sum = segmentTree[2 * idx + 1].sum + segmentTree[2 * idx + 2].sum;
}

long long querySegmentTree(int idx, int left, int right, int qLeft, int qRight)
{
    if (qLeft <= left && qRight >= right)
    {
        return segmentTree[idx].sum;
    }
    if (qRight < left || qLeft > right)
    {
        return 0;
    }

    int mid = left + (right - left) / 2;
    long long leftSum = querySegmentTree(2 * idx + 1, left, mid, qLeft, qRight);
    long long rightSum = querySegmentTree(2 * idx + 2, mid + 1, right, qLeft, qRight);
    return leftSum + rightSum;
}

long long calculateSum(int n,  vector<int> &arr)
{
    segmentTree.resize(4 * n); // Assuming n is the maximum size of the array
    buildSegmentTree(arr, 0, 0, n - 1);

    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int prev = arr[0];
        arr[0] = min(arr[0], arr[n - 1]);
        updateSegmentTree(0, 0, n - 1, 0, arr[0]);
        for (int j = 1; j < n; ++j)
        {
            int temp = min(arr[j], prev);
            prev = arr[j];
            arr[j] = temp;
            updateSegmentTree(0, 0, n - 1, j, arr[j]);
        }
        sum = (sum + querySegmentTree(0, 0, n - 1, 0, n - 1)) % MOD;
    }
    return sum;
}

int main()
{
    int n = 5;
    vector<int> A{6, 10, 7, 7, 7};
    // vector<int> A{1, 4, 4, 1, 3};

    long long ans = calculateSum(n, A);
    cout << ans << endl;
    return 0;
}
