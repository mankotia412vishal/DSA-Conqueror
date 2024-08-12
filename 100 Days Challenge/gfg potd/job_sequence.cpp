#include <bits/stdc++.h>
using namespace std;
int main(){

    int Jobs[5][3] = {{1,2,100},{2,1,19},{3,2,27},{4,1,25},{5,1,15}};

    sort(Jobs,Jobs+5,compare);
    // now I want to sort the jobs wrt to the profit in descending order eg 1,2 100

    return 0;

}