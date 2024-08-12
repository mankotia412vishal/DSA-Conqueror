#include <bits/stdc++.h>
using namespace std;
class Vishal{
    public:
   const void eat()   {
        cout<<"kfb";
    }

};
class r:public Vishal{
    public:
    void eat(){
        cout<<"Vishal \n";
    }
};

int main(){
    r *a=new r;
    a->eat();
}
int main2(){
//     const int a=5;
//     cout<<a<<endl;
//    a=5;
//     cout<<a<<endl;

        // int *a=new int(12);
        // // *a=2;
        // cout<<*a<<endl;
         
        // int b=5;
        // a=&b;
        // cout<<*a<<endl;
    
    return 0;

}