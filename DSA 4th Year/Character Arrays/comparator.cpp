#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    cout<<"First no "<<a<<"---> "<<b;
    // cout<<"  Second no "<<b;
    cout<<"\n\n";
    return a>b;
}
int main()
{

    vector<int> v{5, 3, 1, 2, 4};
    // sort(v.begin(), v.end(),cmp);

    vector<string> s{"Vishal","Singh","Mankotia"};
    sort(s.begin(), s.end());
    
    

    return 0;
}