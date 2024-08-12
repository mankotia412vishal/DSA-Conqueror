#include <bits/stdc++.h>
using namespace std;
 int pivotIndex(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int s2=0;

        for(int i=0;i<nums.size()-1;i++){
           
            if(nums[0]>nums[1]) return 0;
           else  if(nums[i+1]<nums[i]) {
                  s+=nums[i];
                  s+=nums[i+1];
                  s2+=nums[e--];
                  cout<<s<<"-->"<<s2<<endl;;

                  if(s==s2){
                    return i+2;
                  }
                 
             }
             
               else{
                     s+=nums[i];

                 s2+=nums[e--];
                //  cout<<nums[i]<<"-->"<<s<<" --> "<<s2<<endl;
               }

             
        }
        return -1;
    }
int main(){

    // vector<int> nums{1,2,3};
    vector<int> nums{2,1,-1};
    // vector<int> nums{1,7,3,6,5,6};
    cout<<pivotIndex(nums);
    
    return 0;

}