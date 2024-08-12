#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> mp;

void Vowels(string input_data)
{
    for (int i = 0; i < input_data.length(); i++)
    {
        if (input_data[i] == 'a' || input_data[i] == 'e' || input_data[i] == 'i' || input_data[i] == 'o' || input_data[i] == 'u')
        {
            mp[input_data[i]]++;
        }
    }
}
int main()
{
    string ans = "hello world";
    Vowels(ans);
    cout << "Vowels in the string are: " << endl;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}