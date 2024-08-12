#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ans{10, 20, 30, 40};

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = i + 1; j < ans.size(); j++)
        {
            for (int k = j + 1; k < ans.size(); k++)
            {
                cout << "the value of i " << i << " ->> " << j << " -> " << k << " \n";
                if (ans[i] + ans[j] + ans[k] == 80)
                {
                    cout << ans[i] << " " << ans[j] << " " << ans[k] << endl;
                }
            }
        }
    }
}
