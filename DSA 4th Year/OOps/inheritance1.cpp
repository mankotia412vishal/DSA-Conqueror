#include <bits/stdc++.h>
using namespace std;
class Rahul{
    public:
    int age=19;


};
class Vishal:public Rahul{
    
};
int main(){
    Vishal *obj=new Vishal();
     obj->age=23;
     cout<<obj->age;
     Rahul *obj1=new Rahul;
     cout<<obj1->age; cout<<obj->age;


    
    return 0;

}