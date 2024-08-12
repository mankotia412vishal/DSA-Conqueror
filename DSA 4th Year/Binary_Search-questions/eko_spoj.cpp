#include <bits/stdc++.h>
using namespace std;

bool ispossibleSol(vector<long long int> trees, long long int m, long long int mid){
 long long int woodCollected=0;
 for ( long long int  i = 0; i < trees.size(); i++)
 {
     if(trees[i]>mid){
        woodCollected+=trees[i]-mid;
     }
 }
 
return woodCollected>=m;

}
long long int MaxSawBladeHeight(vector<long long int> trees, long long int m)
{
    long long int start = 0, end = *max_element(trees.begin(), trees.end()), ans = -1;

    while (start<=end)
    {
         long long int mid=start+(end-start)/2;
         if(ispossibleSol(trees,m,mid)){
            ans=mid;
            start=mid+1;
         }
         else{
            end=mid-1;
         }
    }
    return ans;
    

}
int main()
{

    long long int n, m;
    cin >> n >> m;
    vector<long long int> trees;
    while (n--)
    {

        long long int height;
        cin >> height;
        trees.push_back(height);
    }
    cout << MaxSawBladeHeight(trees, m) << endl;

    return 0;
}