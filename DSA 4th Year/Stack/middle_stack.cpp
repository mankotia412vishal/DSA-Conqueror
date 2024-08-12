#include <bits/stdc++.h>
using namespace std;
void printMiddle(stack<int> &s,int &totalSize){
    // base case
    if(s.size()==0){
        cout<<"There is no element in stack\n";
    }
    if(s.size()==totalSize/2+1){
        cout<<"Middle element is "<<s.top()<<endl;
        return;
    }

    // 1 case
    int t=s.top();
    s.pop();
 
    printMiddle(s,totalSize);

    // backtrack
    s.push(t);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
  
    
    
    int totalSize=s.size();

    printMiddle(s,totalSize);

    
    return 0;

}