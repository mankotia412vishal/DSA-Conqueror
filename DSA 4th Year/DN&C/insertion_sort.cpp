#include <bits/stdc++.h>
using namespace std;
int main(){

     int arr[] = {5, 4, 3, 2, 1, 6};
    int n = 6;
    for (int  rounds = 1; rounds < n; rounds++)

    {
        // step 1 fetch
         int val=arr[rounds];
         int  i = rounds-1;
         for (; i >= 0; i--)
         {
            // step2 compare
            if(arr[i]>val){
                // step 3 shift
                arr[i+1]=arr[i];
            }else{
                break;
            }

         }
        //  step 4 copy
        arr[i+1]=val;
         
    }
    for (auto num : arr)
        {
            cout << num << " ";
        }
    
    return 0;

}