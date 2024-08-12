#include <iostream>
#include <vector>

using namespace std;

int unique(vector<int> freq)
{
    int ans = 0;
    for (int i = 0; i < freq.size(); i++)
    {
        ans ^= freq[i];
    }
    return ans;
}
int main()
{
    vector<int> fre{1,2,4,2,1,3,6,5,5,6,4};
    int k = unique(fre);
    cout << "Unique no is " << k << endl;
}