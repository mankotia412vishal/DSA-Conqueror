#include <bits/stdc++.h>
using namespace std;
class Car{
    public:
    string name;
    int weight;
    int age;
    void speedUp(){
        cout<<"Speed Up\n";
    }
    void BrakeMaro(){
        cout<<"Break Mardi \n";
    }
};
class Scorpio:public Car{
    public:
    void Print(){
        BrakeMaro();
    }
};
int main(){
    Scorpio *c1=new Scorpio;
    c1->Print();

    
    return 0;

}