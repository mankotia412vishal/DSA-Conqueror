#include <bits/stdc++.h>
using namespace std;
class a{
    public:
    int age=1;
};
class b{
    public:
    int age=11;
};
class C:public a,public b{
    
    


};
int main(){
    C a;
    cout<<a.a::age<<endl;

    
    return 0;

}