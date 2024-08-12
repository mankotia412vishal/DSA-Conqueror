#include <bits/stdc++.h>
using namespace std;
bool pallindrome(string str){
    int s=0,e=str.size()-1;
    while (s<=e)
    {
         if(str[s]!=str[e]){
            return false;

         }
         else{
            s++,e--;
         }
    }
    return true;
}
int main(){

    string str="noon";
    
    int x=0;
    int n=str.length();
    for (int i=0 ; i < n; i++)
    {
        int j=1;
        for ( ; i+j <=n; j++)
        {
          cout<<str.substr(i,j)<<" ";
            // if(pallindrome(str.substr(i,j))){
            //     cout<<str.substr(i,j)<<"---> "<<"pallindrome\n";
            //     x++;
            // }
        }
        cout<<"\n";
        
    }
    cout<<"x "<<x<<endl;
    

    return 0;

}