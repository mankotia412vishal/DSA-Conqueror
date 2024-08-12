#include <bits/stdc++.h>
using namespace std;
int main(){

      deque<int>dq; // creation
      dq.push_front(5);
      dq.push_front(10);

      dq.push_back(110);
      dq.push_back(20);
      cout<<"Size "<<dq.size()<<endl;
      dq.pop_front();
      cout<<"Size "<<dq.size();
        dq.pop_back();
      if(dq.empty()){
        cout<<"\nQ is empty\n";

      }
      else{
        cout<<"\nQ is not empty\n";
      }
    cout<<"\nFront "<<dq.front()<<endl;
    cout<<"\nBack "<<dq.back()<<endl;
    return 0;

}