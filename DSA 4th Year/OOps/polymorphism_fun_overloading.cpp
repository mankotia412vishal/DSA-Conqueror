#include <bits/stdc++.h>
using namespace std;
class Maths{

    public:
    int sum(int a,int b){
        cout<<"1\n";
        return a+b;
    }
    float sum(int a,int b,int c){
        return a+b+c;
    }
    float sum(float a,float b){
         cout<<"2\n";
        return a+b;
    }


};

int main(){

    Maths obj;
   cout<< obj.sum(1,2.1)<<endl;
//    cout<< obj.sum(1,2,7)<<endl;
//    cout<< obj.sum(1.1f,2.7f)<<endl;
    return 0;

}