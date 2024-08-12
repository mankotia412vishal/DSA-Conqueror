#include <bits/stdc++.h>
using namespace std;
  class Animal
{
public:
    Animal()
    {
        cout << "I am in animal Constructor\n";
    }
   virtual void speak()
    {
        cout << "Speaking \n";
    }
};
class Dog : public Animal
{
public:
    Dog()
    {
        cout << "I am in Dog Constructor\n";
    }
     void speak()
    {
        cout << "Barkking \n";
    }
};
int main()
{
    // Animal *obj1 = new Animal;
    // obj1->speak();
    Animal *obj3 = new Dog();
    obj3->speak();

    Dog *obj2=new Dog;
    obj2->speak();

    return 0;
}