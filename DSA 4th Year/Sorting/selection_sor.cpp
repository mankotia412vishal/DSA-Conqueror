#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{2, 13, 4, 1, 3, 6};

    int n = arr.size();

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
                cout << arr[j] << "  <  " << arr[i] << " \n";
            }

            }  
            // cout << arr[min] << " min element is " << endl;
            swap(arr[i], arr[min]);
        }
        cout << "print the sorted array \n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }