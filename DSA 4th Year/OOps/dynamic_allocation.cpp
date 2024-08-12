#include <bits/stdc++.h>
using namespace std;

class Vishal
{
public:
    int age;
    string name;
    void eat()
    {
        cout << "Eating";
    }

    // Constructor
    Vishal()
    {
        this->age = 77777;
        this->name = "";
        cout << "Default Constructor Called\n";
    }
    Vishal(int age)
    {
        this->age = age;

        cout << "Parameterised Constructor Called\n";
    }
    Vishal(Vishal &obj){
        this->age=obj.age;
        this->name=obj.name;
        cout<<"I am inside copy constructor\n";

    }
    virtual  ~Vishal(){
        cout<<"Destructor\n";
      }
};
int main()
{
   
    // Vishal *obj1 = new Vishal(1);
     
    

    // obj1->age = 122;
    // obj1->name = "Vishallll";
    // cout << obj1->age << endl;
    // cout << obj1->name << endl;

    // obj1->eat();

    Vishal a;
    Vishal b=a;
    b.age=89;
    
    cout<<a.age<<endl;
    cout<<b.age<<endl;
    // delete obj1;
     
     
     

    return 0;
}