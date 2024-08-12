#include <bits/stdc++.h>
using namespace std;
class abc{
        public:
        int x;
        int *y;

        abc(int _x,int _y):x(_x),y(new int(_y)){}
        //  abc(int x,int y){
        //     this->x=x;
        //     *this->y=y;

        //  }
         void print() const{
            printf("X: %d\n PTR Y: %p\nContent of Y (*y):%d\n\n",x,y,*y);

         }

        //  default dumb copy constructor
        abc( const abc &obj){
            this->x=obj.x;
        //    this->y=obj.y;
                this->y=new int(*obj.y);
        }

};
int main(){

    abc a(1,2);
     cout<<"Printing a\n";
    a.print();
    abc b(a);
     cout<<"Printing b\n";
      b.print();
    *b.y=20;
     cout<<"Printing b\n";
    b.print();
    cout<<"Printing a\n";
    a.print();

    
    return 0;

}