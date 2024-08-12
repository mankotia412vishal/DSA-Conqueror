#include <bits/stdc++.h>
using namespace std;
int main(){

//     Input:
// N = 7, X = 2
// Arr[] = {1, 1, 2, 2, 2, 2, 3}
// Output: 4
// Explanation: 2 occurs 4 times in the
// given array.
// Example 2
int n=7,x=2;
int arr[]={1, 1, 2, 2, 2, 2, 3};
// 6 12
// 8 9 10 12 12 12
// int n=6,x=12;
// int arr[]={8, 9, 10, 12, 12, 12};
int count=1;    
int upper1 = lower_bound(arr, arr+n, x) - arr;

int upper2 = upper_bound(arr, arr+n, x) - arr;
 
for (int  i = upper1; i <=upper2; i++)
{
  if(arr[i]==x){
      count++;}
}
cout<<count<<endl;

    return 0;

}