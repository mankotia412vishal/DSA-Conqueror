#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(){
  vector <int> vishal(10);
//   vishal[0]=1;
//   vishal[1]=11;
//   vishal.push_back(3);
//   vishal.push_back(31);
//   vishal.push_back(311);
//   vishal.pop_back();
//   vector <int> vishal{1,2,3,4};
  for (int i = 0; i < vishal.size(); i++)
  {
    cout<<vishal[i]<<" ";
  }
  cout<<endl;
  cout<<vishal.capacity()<<endl;
  cout<<vishal.size()<<endl;
  cout<<vishal.empty()<<endl;
  int arr[5]={1,2,3,4};
  for ( auto i:arr){
    cout<<i<<" ";
  }
  int u=1;
  label:
  cout<<"Vishal";
  u++;
  if(u<=1){
    goto label;
  }

  
  
}