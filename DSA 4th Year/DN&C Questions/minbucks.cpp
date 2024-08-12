#include <bits/stdc++.h>
using namespace std;
 void arrayMinMax(vector<int> &bloomDay,int &minElement,int &maxElement){
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<minElement){
                minElement=bloomDay[i];
            }
            if(bloomDay[i]>maxElement){
                maxElement=bloomDay[i];
            }
        }
    }
    bool isPossible(vector<int> &bloomDay,int days,int m,int k){
        int count=0,numOfBouq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=days){
                count++;
            }
            else{
                numOfBouq+=count/k;
                count=0;
            }
        }
        numOfBouq+=count/k;
        return numOfBouq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int minDays=INT_MAX,maxDays=INT_MIN;
        arrayMinMax(bloomDay,minDays,maxDays);
        cout<<minDays<<" "<<maxDays<<endl;
        for(int i=minDays;i<=maxDays;i++){
            if(isPossible(bloomDay,i,m,k)){
                return i;
            }
        }
        return -1;
    }
int main(){

    // bloomDay = [1,10,3,10,2], m = 3, k = 1
    vector<int>bloomDay{1,10,3,10,2};
    int m=3,k=1;
    cout<<minDays(bloomDay,m,k);
    

    return 0;

}