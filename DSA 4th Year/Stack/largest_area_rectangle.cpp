#include <bits/stdc++.h>
using namespace std;
 vector<int> prevSmallestElement(long long arr[],int n){
          vector<int> ans(n);
          
          stack<int>st;
          st.push(-1);
          for(int i=0;i<n;i++){
              int curr=arr[i];
              while(st.top()!=-1 &&arr[st.top()]>=curr){
                  st.pop();
              }
              ans[i]=st.top();
              st.push(i);
          }
          return ans;
          
     }
      vector<int> NextSmallestElement(long long arr[],int n){
          vector<int> ans(n);
          
          stack<int>st;
          st.push(-1);
          for(int i=n-1;i>=0;i--){
              int curr=arr[i];
              while(st.top()!=-1 && arr[st.top()]>=curr){
                  st.pop();
              }
              ans[i]=st.top();
              st.push(i);
          }
          
          return ans;
          
     }
    long long getMaxArea(long long arr[], int n)
    {
        // step 1 make array of prevous elements
        long long maxArea=INT_MIN;
        vector<int> prev=prevSmallestElement(arr,n);
         
         
        // step 2 make array of next elements
        vector<int> next=NextSmallestElement(arr,n);
        

         
        
        for(int i=0;i<n;i++){
            int len=arr[i];
            
            if(next[i]==-1){
                next[i]=n;
            }
            int width=next[i]-prev[i]-1;
           long long  area=len*width;
            maxArea=max(area,maxArea);
        }
        
        return maxArea;
       
    }
int main(){
    int n=6;
    long long arr[]={2,1,5,6,2,3};

    cout<<"Answer is "<<getMaxArea(arr,n);



    
    return 0;

}