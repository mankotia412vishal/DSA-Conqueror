#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int age = 12;
};
class B
{
public:
    int age = 122;
};
class C : public A, public B
{
    int math;
 
};

int main()
{
    C a;
    cout<<a.B::age<<" "<<a.A::age<<endl;

    return 0;
}