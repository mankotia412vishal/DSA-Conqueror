#include <bits/stdc++.h>
using namespace std;
int main(){

    stack<int> s;
    // {10,20,30,40,50}
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int  size=s.size();
    // int m=stsize/2;
    vector<int> arr;
    // vector<int> arr;
        int mid=size/2;
        int kitnenikalne=mid;
        while(kitnenikalne--){
            arr.push_back(s.top());
            s.pop();
        }
        s.pop();
        arr.pop_back();
        for(int i=arr.size();i>=0;i--){
            s.push(arr[i]);
        }

    
while (!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}

    
    return 0;

}