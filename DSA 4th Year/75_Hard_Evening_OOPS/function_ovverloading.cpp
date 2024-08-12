#include <bits/stdc++.h>
using namespace std;
class Vishal{
    public:
    int a;
    float b;
    double c;
    int d;
    void sum(int a ,int d){
        cout<<"I am in fun1\n";
    }
    void sum(int a ,float d){
        cout<<"I am in fun4\n";
    }
    void sum(float a ,double d){
        cout<<"I am in fun2\n";
    }
    void sum(float a ,int b,double d){
        cout<<b<<endl;
        cout<<d<<endl;
        cout<<"I am in fun3\n";
    }
     
};
int main(){
    Vishal *o=new Vishal;
     
    o->sum(11,float(0.1));

    
    return 0;

}