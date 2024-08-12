#include <bits/stdc++.h>
using namespace std;

class param{
    public:
    int val;

    void operator +(param &obj2){
        int val1=this->val;
        int val2=obj2.val;
        cout<<(val1/val2)<<endl;
    }

};
int main(){
        param obj1,obj2;
        obj1.val=7;
        obj2.val=2;

        // this should print the differencec between them
       obj1+obj2;

    
    return 0;

}