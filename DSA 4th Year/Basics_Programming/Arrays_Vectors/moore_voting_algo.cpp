#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{3,1,3,3,2};
        int c=0,element;
    for (int  i = 0; i < arr.size(); i++)
    {
        if(c==0){
            element=arr[i];
        }
        if(element==arr[i]){
            c++;
        }
        else{
            c--;
        }
    }
    cout<<"Majority element is "<<element<<endl;
    return 0;

}