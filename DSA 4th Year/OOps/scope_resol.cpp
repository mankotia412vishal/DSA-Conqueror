#include <bits/stdc++.h>
using namespace std;
class PcM{
        public:
        int chem=11;
        int physics;
};
class FULLmed{
        public:
        int chem=12;
        int physics;
};
class medical:public PcM,public FULLmed{
  public:
        int chem=13;
        int physics;

};
int main(){
    PcM *a=new PcM;
    FULLmed *b=new FULLmed;
    // FULLmed

    cout<<b->FULLmed::chem;


    
    return 0;

}