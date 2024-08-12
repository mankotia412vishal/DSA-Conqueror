#include <bits/stdc++.h>
using namespace std;

class Info
{
public:
    int no;
    int row;
    int col;
    Info(int d, int r, int c)
    {
        this->no = d;
        this->row = r;
        this->col = c;
    }
};

class Compare
{
public:
    bool operator()(Info *a, Info *b)
    {
        return a->no > b->no;
    }
};
vector<int> MergeK(int arr[][4], int k, int n)
{
    priority_queue<Info *, vector<Info *>, Compare> minHeap;

    for(int i=0;i<k;i++)
    {
        Info *temp = new Info(arr[i][0], i, 0);
        minHeap.push(temp);
    }
    
}
int main()  
{
    int arr[][4] = {{2, 4, 6, 8}, {1, 3, 5, 7}, {0, 9, 10, 11}};

    int k = 3;
    int n = 4;
}