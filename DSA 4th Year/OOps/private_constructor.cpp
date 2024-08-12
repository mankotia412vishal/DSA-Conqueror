#include <bits/stdc++.h>
using namespace std;
class Box{
    int width;
    
    Box(int _w){
        this->width=_w;
    }
    public:
    int getWidth(){
        return width;
    }
    void setWidth(int w){
        this->width=w;
    }
    friend class BoxFactory;

};
class BoxFactory{
        int count;
        public:
       
       Box getABox(int _w){
        ++count;
        return Box(_w);

       }
};
int main(){

    // Box b(5);
    BoxFactory b;
    Box obj=b.getABox(5);

    
    cout<<obj.getWidth()<<endl;
    return 0;

}