#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[][4],int n,int m,int t){
        int s=0,e=n*m-1;
        int mid=s+(e-s)/2;

        while (s<=e)
        {
            int rowIndex=mid/m;
            int columnIndex=mid%m;
            int element=arr[rowIndex][columnIndex];
            if(element==t){
                cout<<"Found at Index "<<rowIndex<<" -> "<<columnIndex<<endl;
                return true;
            }
            if(element<t){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
          mid=s+(e-s)/2;  
        } 
        return false;
}
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int n=5;
    int m=4;

    int target=11;

    bool ans=binarySearch(arr,n,m,target);
    if(ans){
        cout<<"Found \n";
    }
    else{
        cout<<"Not Found\n";
    }

}