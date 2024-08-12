#include <bits/stdc++.h>
using namespace std;
int main(){

    string str="Vishalismynameis";
    string p="is";
   int found=str.find(p);
   while (found!=string::npos)
   {
    cout<<found<<endl;
    found=str.find(p,found+1);
        
    

   }
   

    return 0;

}