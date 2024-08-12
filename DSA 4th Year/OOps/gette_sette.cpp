#include <bits/stdc++.h>
using namespace std;
class VIT
{

    int age;
   
    // getters and setters
    public:
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
       this->age = a;
    }

    // constructer
    
};
int main()
{
    VIT obj;
    cout<<sizeof(obj)<<endl;
    obj.setAge(12);
    cout << obj.getAge() << endl;

    return 0;
}