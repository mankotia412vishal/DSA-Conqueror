//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends

bool checkPallindrome(string str,int s,int e){
    while(s<=e){
        if(str[s]!=str[e]){
            return false;
        }
        else {
            s++,e--;
        }
    }
    return true;
}
int minDeletions(string str, int n) { 
    //complete the function here 
    
    int s=0,e=n-1,c=0;
    while(s<=e){
        if(str[s]!=str[e]){
            checkPallindrome(str,s+1,e);
            checkPallindrome(str,s,e-1);
            c++;
        }
        else{
            s++,e--;
        }
        
    }
    return c;
} 