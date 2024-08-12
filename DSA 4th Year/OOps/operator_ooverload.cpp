#include <bits/stdc++.h>
using namespace std;
class Numbers
{
public:
    int no1;
    Numbers()
    {
        this->no1 = no1;
    }
    void operator+(Numbers &obj2)
    {
        int val1 = this->no1;
        int val2 = obj2.no1;
        cout << val1 * val2 << endl;
    }
};
int main()
{

   Numbers obj1,obj2;
    obj1.no1 = 22;
    obj2.no1 = 11;
    obj1 + obj2;

    return 0;
}