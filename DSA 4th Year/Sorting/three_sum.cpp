#include <bits/stdc++.h>
using namespace std;
  vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1;
            int k=n-1;
            while(j<k){
                int s=nums[i]+nums[j]+nums[k];
                cout<<"Vishal "<<s<<endl;
                if(s<0){
                    j++;
                }
               else if(s>0) k--;

                else{
                      cout<<"i j k ki value"<<i<<" "<<j<<" "<<k<<endl;
                    vector<int> t{nums[i],nums[j],nums[k]};
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                    sol.push_back(t);
                    j++;k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                
                }
            }
        }
        return sol;
    }

int main(){

    vector<int> arr{-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threeSum(arr);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;

}