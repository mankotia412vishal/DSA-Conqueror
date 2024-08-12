#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int size,int k){
    deque<int>dq;

    // step 1 process first window of size k
    for (int  i = 0; i < k; i++)
    {
        if(arr[i]<0){
            dq.push_back(i);
        }
    }

    // step 2 remaining window process 
    // karo

    for(int i=k;i<size;i++){
        // answer dedo purani window ka 

        if(dq.empty()){
            cout<<"0 ";
        }
        else{
            cout<<arr[dq.front()]<<" ";
        }

        // out of the window ka element remove karna haii
        while (!dq.empty()&&i-dq.front()>=k)
        {
            dq.pop_front();
        }

        // check curent element for the inerstion

        if(arr[i]<0){
            dq.push_back(i);
        }
        
    }

    // print answer karo lst window ka 
     if(dq.empty()){
            cout<<"0 ";
        }
        else{
            cout<<arr[dq.front()]<<" ";
        }
    
    

}
int main(){

    int arr[]={12,-1,-7,8,-15,30,16,28};
    int size=8;

    int k=3;

    solve(arr,size,k);
    return 0;

}