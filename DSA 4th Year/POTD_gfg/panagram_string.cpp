#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Bawds jog, flick quartz, vex nymph";

    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        
      
        if (ch >= 65 && ch <= 90 && s[i] != ',')
        {
            ch = ch - 'A' + 'a';
            
        }

        if (ch >= 97 && ch <= 122 && s[i] != ',')
        {
            int index = int(ch - 'a');
            arr[index] = 1;
            cout << index << " -> " << ch << endl;
        }
    }
    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}