#include <bits/stdc++.h>
#include"bird.h"

using namespace std;

void birddoesSomething1(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
}


int main(){

    Bird *bird=new hen();
    birddoesSomething1(bird);

    
    return 0;

}