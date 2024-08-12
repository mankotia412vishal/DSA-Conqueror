#include <bits/stdc++.h>
using namespace std;
class Abc{
    
    int x;
    const int y=1;
    // Abc(){
    //     x=1;
    //     // y=2; // gives error
    // }

    // uski jagha pe initailsation list use kar sakta hu
    public:
    Abc(int _x,int _y):x(_x),y(_y){
        
    }
    int getX(){
        return x;
    }
    void setX(int _x){
        this->x=_x;

    }
    int getY(){
        return y;
    }
     
};
int main(){
    Abc *obj=new Abc(1,2);
    cout<<obj->getX()<<endl;
    cout<<obj->getY()<<endl;
    
    return 0;

}