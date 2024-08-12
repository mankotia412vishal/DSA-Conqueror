#include <bits/stdc++.h>
using namespace std;
bool issPossibleSoln(vector<int> cooksRanks,int nP,int mid){
    int currP=0;//initial cooked Pratha Count

    for (int  i = 0; i < cooksRanks.size(); i++)
    { 
        int R=cooksRanks[i],j=1;
        int timeTaken=0;
        while (true)
        {
            if(timeTaken +j*R<=mid){
                currP++;
                timeTaken+=j*R;
                j++;
            }
            else{
                break;
            }
        }
        if(currP>=nP){
            return true;
        }
        
            
        
    }
    return false;

}
int minTimeCompleteOrder(vector<int> cooksRanks,int nP){

    int start=0;
    int highestRank=*max_element(cooksRanks.begin(),cooksRanks.end());

    int end=highestRank*(nP*(nP+1)/2);
    int ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(issPossibleSoln(cooksRanks,nP,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    return ans;
    
}
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int nP,nC;
    cin>>nP>>nC;
    vector<int>cooksRanks;
    while (nC--)
    {
       int r;
       cin>>r;
       cooksRanks.push_back(r);


    }
    cout<<minTimeCompleteOrder(cooksRanks,nP)<<endl;
    }
    
    
    return 0;

}