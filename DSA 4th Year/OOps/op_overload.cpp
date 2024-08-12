#include <bits/stdc++.h>
using namespace std;
class Vishal{
    public:
    int val=0;
    void operator+(Vishal &obj2){
            int val1=val;
            int val2=obj2.val;
            cout<<val1-val2<<endl;
    }
};
int main(){
    Vishal a,b;
    a.val=10;
    b.val=1;
    a+b;


    
    return 0;

}