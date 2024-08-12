#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
   Animal()
    {
        cout << "I am Inside Animal constructor\n";
    }
   virtual void speak()
    {
        cout << "Speaking\n";
    }
};

class dog : public Animal
{
public:
    dog()
    {
        cout << "I am Inside dog constructor\n";
    }
    void speak()
    {
        cout << "braking\n";
    }
    Animal *ob1=new Animal();
    

};







int main()
{
    
    // dog a;
    // a.speak();

    // Animal *obj1=new Animal();
    // obj1->speak();

    Animal *obj1=new dog();
    obj1->speak();

    // dog *ob2=(dog*) new Animal;

    // Constructor playing

    // Animal *obj1=new Animal();

    // Animal *obj1 = new dog();
    
    // dog *obj2=(dog*) new Animal();

    // Animal *obj=new dog();
    // obj->speak();
    
    return 0;
}