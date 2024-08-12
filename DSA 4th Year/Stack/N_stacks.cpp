#include <bits/stdc++.h>
using namespace std;
class NStack{
    int *a,*top,*next;
    int n; //no of stacks
    int size; //size of main array
    int freespot; // tells free space in main array
    
    public:
    NStack(int _n,int _s):n(_n),size(_s){
        freespot=0;
        a=new int[size];
        top=new int[n];
        next=new int[size];

        for (int  i = 0; i < n; i++)
        {
             top[i]=-1;
        }
        for (int  i = 0; i < size; i++)
        {
             next[i]=i+1;

        }
        next[size-1]=-1;
        
    }
    // push X into mth stack

    bool push(int X,int m){
        if(freespot==-1){
            return false; // stack overflow
        }

        // 1. find index 
        int index =freespot;
        //2. update spot
        freespot=next[index];
        // 3. insert in array
        a[index]=X;
        // 4. update next
        next[index]=top[m-1];
        // 5 update top
        top[m-1]=index;

        return true;
    }
    // pop from mth stack
    int pop(int m){
        if(top[m-1]==-1) return -1; // stack under flow

        int index=top[m-1];
        top[m-1]=next[index];
        int poppedElement=a[index];

        next[index]=freespot;
        freespot=index;
        return poppedElement;
    }
    ~NStack(){
        delete[] a;
        delete[ ] top;
        delete [] next;
    }

};
int main(){

    NStack st(3,6);
    cout<<st.push(10,1)<<endl;
    cout<<st.push(11,1)<<endl;
    cout<<st.push(12,1)<<endl;
    cout<<st.push(13,1)<<endl;
    cout<<st.push(14,2)<<endl;
    cout<<st.push(15,3)<<endl;
    cout<<st.push(16,1)<<endl;
    cout<<st.pop(1)<<endl;
    cout<<st.pop(2)<<endl;

    
    return 0;

}