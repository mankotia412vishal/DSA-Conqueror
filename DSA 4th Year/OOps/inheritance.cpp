#include <bits/stdc++.h>
using namespace std;

class Animal
{
protected:
    int age;
};

class dog : public Animal
{

public:
    void print()
    {
        cout << this->age << endl;
    }
};
int main()
{

    dog *obj1 = new dog;
    //    cout<< obj1->age;
    obj1->print();
    return 0;
}