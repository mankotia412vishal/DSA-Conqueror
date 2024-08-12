#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 3, 3};
    int c = 0, element;
    for (auto num : arr)
    {
        if (c == 0)
        {
            element = num;
            c = 1;
        }
        else if (element == num)
        {

            c + 1;
        }
        else{
            c--;
        }
    }
    cout<<element<<endl;  
}