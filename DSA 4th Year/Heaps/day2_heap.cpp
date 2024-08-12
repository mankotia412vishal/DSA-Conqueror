#include <bits/stdc++.h>
using namespace std;
class Heap
{
public:
    int *arr;
    int size;
    Heap()
    {
        size = 0;
    }
    Heap(int s)
    {
        this->size = s;
        arr = new int[s];
    }

    // insertion in the heap

    void insert(int data)
    {
        // step A size ko bhadao
        size = size + 1;
        int index = size;
        arr[index] = data;

        // int index = size;
        // step b leke jao right position pe

        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[parentIndex] > arr[index])
                break;
            else
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
        }
    }
    int Delete()
    {
        // step 1 replece root node value with last node value
        int ans = arr[1];
        arr[1] = arr[size];
        size--;

        int index = 1;
        // place root node ka data to its correct position
        while (index < size)
        {
            int largest = index;
            int left = 2 * index;
            int right = 2 * index + 1;
            if (left < size && arr[largest] < arr[left])
            {
                largest = left;
            }
            if (right < size && arr[largest] < arr[right])
            {
                largest = right;
            }
            if (largest == index)
                break;

            else
            {
                swap(arr[largest], arr[index]);
                index = largest;
            }
        }
        return ans;
    }
};

void heapify(int arr[], int n, int i)
{
    int index = i;
    int largest = index;
    int left = 2 * index;
    int right = 2 * index + 1;

    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (index != largest)
    {
        swap(arr[largest], arr[index]);
        index = largest;
        heapify(arr, n, index);
    }
}

void build_heap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}
void Heapsorting(int arr[], int n)
{
    int index = n;
    while (n != 1)
    {
        swap(arr[1], arr[index]);
        index--;
        n--;

        // heapify
        heapify(arr, n, 1);
    }
}
int main()
{
    Heap h(9);

    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 20;
    h.arr[5] = 40;
    h.arr[6] = 45;
    h.arr[7] = 55;
    h.arr[8] = 5;
    h.arr[9] = 10;

    h.size = 9;

    cout << "Printing the elements in the heap ";
    for (int i = 0; i < h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    h.insert(110);
    cout << "Printing the elements in the heap ";
    for (int i = 0; i < h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    cout << "\n printing the delete elements " << h.Delete();
    cout << "\nPrinting the elements in the heap ";
    for (int i = 0; i < h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    // int arrr[] = {-1, 12, 15, 13, 11, 14};
    int arrr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32};
    int n = 12;
    build_heap(arrr, n);
    cout << "\nPrinting the elements in the heap ";
    for (int i = 1; i < n; i++)
    {
        cout << arrr[i] << " ";
    }

    cout << endl;
    Heapsorting(arrr, n);
    cout << "\nPrinting the elements in the heap ";
    for (int i = 0; i < n; i++)
    {
        cout << arrr[i] << " ";
    }
    return 0;
}