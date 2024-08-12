#if !defined(BIRD_H)
#define BIRD_H
#include<bits/stdc++.h>

using namespace std;
class Bird{
    public:
    virtual void eat()=0;
    virtual void fly()=0;
};
// classes that inheirts this class has to implement pure virtual function

class hen: public Bird{
    public:
    void eat(){
        cout<<"hen is Eating\n";
    }
    void fly(){
        cout<<"hen is flying\n";
    }

};

class sparrow:public Bird{
        public:
          void eat(){
        cout<<"sparrow is Eating\n";
    }
    void fly(){
        cout<<"sparrow is flying\n";
    }
};
#endif // BIRD_H
