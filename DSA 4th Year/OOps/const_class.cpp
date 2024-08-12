#include <bits/stdc++.h>
using namespace std;

class abc
{
    int x;
    int *y;
    int z;

public:
//    abc()
//     {
//         this->x = 0;
//         y = new int(0);
//     }
   abc(int x,int _y,int _z=0)
    {
        this->x = x;
        y=new int (_y);
        z=_z;
    }

     int getX()  const
    {
        
        return x;
    }
    void setX(int _x) 
    {
        this->x = _x;
    }

    int getY() const
    {
        // int f=10;
        // y=&f;
        return *y;
    }
    void setY(int _val)
    {
        *y = _val;
    }
};

void printABS(const abc &a){
    cout<<a.getX()<<" "<<a.getY()<<endl;
}
int main()
{
    abc a(1,2);
    printABS(a);
    cout << a.getX() << endl;
    cout << a.getY() << endl;

    return 0;
}