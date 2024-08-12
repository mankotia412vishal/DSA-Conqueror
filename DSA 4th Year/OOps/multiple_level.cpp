#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int physics=11;
};
class B{
        public:
        int chemistry;
        int physics=101;

};
class C:public A,public B{
    public:
    int maths;
};
int main(){
    C *obj1=new C;
    cout<<obj1->chemistry<<" "<<obj1->maths<<" "<<obj1->B::physics<<endl;

    
    return 0;

}