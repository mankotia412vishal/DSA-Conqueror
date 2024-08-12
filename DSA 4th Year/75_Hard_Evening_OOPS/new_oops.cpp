#include <bits/stdc++.h>
using namespace std;
class Anshu{
    private:
    int age;
    public:
    string name;
    string place;
    string clg_name;
    Anshu(int age,string name,string place,string clg_name){
        this->age=age;
        this->name=name;
        this->place=place;
        this->clg_name=clg_name;

    }
    Anshu(Anshu &obj){
        this->age=obj.age;
        this->name=obj.name;
        this->place=obj.place;
        this->clg_name=obj.clg_name;

    }

    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age=age;
    }

};
int main(){
    Anshu *obj1=new Anshu(12,"Vishal","Samba","VIT");
    cout<<obj1->place<<endl;
    obj1->setAge(12);
    cout<<obj1->getAge()<<endl;
    cout<<sizeof(Anshu)<<endl;
    Anshu a(1,"a","a","a");
    Anshu b=a;
     b.clg_name="sss";
     cout<<b.clg_name<<endl;
     cout<<a.clg_name<<endl;


    
    return 0;

}