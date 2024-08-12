#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
    // creation
    // string str="thiruvananthapuram";
    // unordered_map<char,int> freq;


    // for (int  i = 0; i < str.length(); i++)
    // {
    //     char ch=str[i];
    //     freq[ch]++;
    // }
    // for (auto i: freq)
    // {
    //    cout<<i.first<<"->"<<i.second<<endl;
    // }


    char ch[1024]={"abcd"};
    char *ptr=ch;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    
     
    
}