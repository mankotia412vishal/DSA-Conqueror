#include <bits/stdc++.h>
using namespace std;
class Heap
{
public:
    int *arr;
    int size;
    Heap()
    {
    }
    Heap(int s)
    {
        // this->size = s;
        arr = new int[s];
    }
    void Insert(int value)
    {
        // value insert karo end mein
        size = size + 1;
        int index = size;
        arr[index] = value;

        // iss value ko iski right positon pe place karna
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }
    int Delete()
    {

        // A replace root node value with last node data
        int ans = arr[1];
        arr[1] = arr[size];
        size--;

        // B place root node to its correct position
        int index = 1;
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;
            int largest = index;

            if (left < size && arr[largest] < arr[left])
            {
                largest = left;
            }
            if (right < size && arr[largest] < arr[right])
            {
                largest = right;
            }
            if (largest == index)
            {
                // values is at its right position
                break;
            }
            else
            {
                swap(arr[index], arr[largest]);
                index == largest;
            }
        }
        return ans;
    }
};
int main()
{
    Heap h(5);
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size = 5;

    cout << "Printing the heap\n";
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    h.Insert(110);
    cout << "Printing the heap\n";
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    cout << h.Delete();

    cout << "\nPrinting the heap\n";
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    return 0;
}