#include <bits/stdc++.h>
using namespace std;
class maths
{
public:
    int val;

    void operator*(maths &obj2)
    {
        int val1 = this->val;
        int val2 = obj2.val;
        cout << (val1 - val2) << endl;
    }
};
int main()
{
    maths *obj1= new maths;
    maths  *obj2= new maths;
   
    obj1->val = 7;
    obj2->val = 2;
//    obj1->val+obj2->val; 

    
    *obj1 * *obj2;

    return 0;
}