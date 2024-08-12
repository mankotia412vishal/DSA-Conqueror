#include <bits/stdc++.h>
using namespace std;
class Car{
    public:
    int age;
    int weight;
    void SpeedUp(){
        cout<<"Speeding Up\n";
    }

};
class scorpio:public Car{
 public:

};
class Forturner:public Car{
    public:

};
int main(){
        scorpio s1;
        s1.SpeedUp();
        
    
    return 0;

}