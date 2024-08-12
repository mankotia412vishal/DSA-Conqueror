#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{1,5,4,1,3,2,1};
    int min ;

    for (int i = 0; i < arr.size()-1; i++)
    {
        min = i;
        
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min])
            {
                 min =  j;
            }
        }
     
       
        swap(arr[i], arr[min]);
        
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}