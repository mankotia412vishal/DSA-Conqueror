#include <bits/stdc++.h>
using namespace std;
class a{
    public:
    int age;
   a(){
        cout<<"I am in Virtual Constructor\n";
     }
   virtual    ~a(){
        cout<<"I am in destructor\n";
     }
};
class b:public a{
    public:
    b(){
        cout<<"Derived constructor\n";
    }
    ~b(){
        cout<<"Derived destructor\n";
    }
};
int main(){
    a *obj=new b();
    a j;
    a const k=j;
    j.age=11;
     cout<<j.age<<" "<<k.age<<endl;

    
    delete obj;


    
    return 0;

}