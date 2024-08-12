#include <bits/stdc++.h>
using namespace std;
 int maxi=INT_MIN;
int sum(vector<int> ans){
    for (auto  i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    int k= accumulate(ans.begin(),ans.end(),0);
     maxi=max(k,maxi);
    cout<<k<<endl;
    return k;
}

   
    bool canSplitArray(vector<int>& nums, int m) {
        int n=nums.size();
         for (int i = 0; i < n; ++i) {
        vector<int> ans;
        // Iterate through each ending index
        for (int j = i; j < n; ++j) {
            // Print the substring
            for (int k = i; k < j-1; ++k) {
                
              ans.push_back(nums[k]);
             sum(ans);

             

            }  
            

              
        }
    }
        cout<<maxi;
    }

int main(){

    vector<int> nums{2, 2, 1};
    int m=4;
    canSplitArray(nums,m);
    return 0;

}

