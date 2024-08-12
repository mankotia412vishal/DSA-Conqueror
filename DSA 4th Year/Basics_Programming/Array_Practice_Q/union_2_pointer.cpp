#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr1[]={2,2,3,4,5};
    int arr2[]={1,1,2,3,4};
    int m=5;
    int n=5;
    int i=0,j=0;
    vector<int> ans;
    while (i<n && j<m)
    {
        if (arr1[i]==arr2[j])
        {
             if( ans.size()==0 || ans[ans.size()-1]!=arr1[i]){
                    ans.push_back(arr1[i]);
             }
             i++;
             j++;
        }

        else if(arr1[i]< arr2[j]){
             if( ans.size()==0 || ans[ans.size()-1]!=arr1[i]){
                    ans.push_back(arr1[i]);
             }
             i++;
        }
        else{
            if( ans.size()==0 || ans[ans.size()-1]!=arr2[j]){
                    ans.push_back(arr2[j]);
             }
             j++;
        }
        
    }
 if(i>=n&&j<m)
      {
        while(j<m&&ans[ans.size()-1]!=arr2[j])ans.push_back(arr2[j++]);
      }
      else if(i<n&&j>=m)
      {
        // cout<<"hello"<<endl;
        while(i<n&&ans[ans.size()-1]!=arr1[i])ans.push_back(arr1[i++]);
      }
      for(auto it:ans)cout<<it<<" ";
    

    return 0;

}