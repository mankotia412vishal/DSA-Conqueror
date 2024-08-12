#include <bits/stdc++.h>
using namespace std;

class Fruit{
    public:
    
    string name="Vishal";

};
class Mango:public Fruit{

    public: 
    int weight=0;
   
};
class Alphaso:public Mango{
    public:
     int sugerLevel=1;
};
int main(){

    Alphaso *obj1=new Alphaso;

    cout<<obj1->sugerLevel<<" "<<obj1->weight<< " "<<obj1->name<<endl;
    return 0;

}