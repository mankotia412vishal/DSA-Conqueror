#include <bits/stdc++.h>
using namespace std;
class Vishal
{
public:
    int age;
    int rollNo;
    string Name;

private:
    int accountNo;

public:
    Vishal()
    {
        this->age = 0;
        this->rollNo = 0;
        this->Name = "";
        this->accountNo = 0;
    }
    Vishal(int age, int rollNo, string name)
    {
        this->age = age;
        this->rollNo = rollNo;
        this->Name = name;
    }
    int getAcc()
    {
        return accountNo;
    }
    void setAcc(int acc)
    {
        this->accountNo = acc;
    }
    Vishal(Vishal &obj1)
    {
        this->age = obj1.age;
        this->rollNo = obj1.rollNo;
        this->Name = obj1.Name;

        cout << "I am inide copy constructor\n";
    }
};

int main()
{
    Vishal *obj1=new Vishal(10,01,"Raja");
    // cout<<obj1->age<<endl;
    // cout<<obj1->Name<<endl;
    // obj1->setAcc(786);
    // cout<<obj1->getAcc()<<endl;

    // Vishal a(10, 1, "Vishal");
    // Vishal b = a;
    // cout << b.age << endl;
    // a.age = 11;
    // cout << a.age << endl;
    // cout << b.age << endl;
    Vishal *a =new Vishal;
    a=obj1;
    obj1->age=7;
    cout<<a->age<<endl;
    
    cout<<obj1->age<<endl;
    return 0;
}