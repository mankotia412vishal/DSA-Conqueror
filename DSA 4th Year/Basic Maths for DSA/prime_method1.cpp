#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool p=true;
    for (int  j = 2; j<n; j++)
    {
        
    
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            p=false;
            cout << "Not a prime\n";
            break;
        }
       
    }
    }
    if(p){
        cout<<"Prime haii\n";
    }
    cout<<sqrt(10)<<endl;
}