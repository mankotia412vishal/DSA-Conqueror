#include <bits/stdc++.h>
using namespace std;
class Vishal{

    private:
    int age;
    int weight;
    string name;

public:
    void eat(){
        cout<<"eating\n";
    }
    int getage(){
        return this->age;
    }
    void setAge(int age){
        this->age=age;
    }
};
int main(){
    Vishal *obj1=new Vishal;
    obj1->setAge(20);
    cout<<obj1->getage()<<endl;


    
    return 0;

}