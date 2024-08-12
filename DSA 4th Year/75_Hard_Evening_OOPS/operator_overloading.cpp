#include <bits/stdc++.h>
using namespace std;
class Add{
    public:
    int val;

 
    void operator +(Add &obj1){
        int val1=this->val;
        
        int val2=obj1.val;
        
        cout<<"The Sub "<<val1-val2<<endl;
    }

};
int main(){
    Add obj1,obj2;
    obj1.val=12;
    obj2.val=1;
     obj1+obj2;

    return 0;

}