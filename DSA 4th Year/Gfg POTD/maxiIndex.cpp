#include<bits/stdc++.h>
using namespace std;


int maxIndexDiff(int a[], int n) 
{ 
    vector<int> maxArrayNumbers(n, 0); // this vector will store the array maximum number from the n-1 to 0
    vector<int> minxArrayNumbers(n, 0); // this vector will store the array minumum number from 0 to n-1
    
    int maxi = a[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        maxi = max(maxi, a[i]);
        maxArrayNumbers[i] = maxi;
    }
    
    int mini = a[0];
    for (int i = 0; i < n; i++) {
        mini = min(mini, a[i]);
        minxArrayNumbers[i] = mini;
    }
    
    int i = 0, j = 0;
    int ans = -1;
    while (i < n && j < n) {
        cout<<"The value of the i and j "<<i<<" "<<j<<endl;
        if (maxArrayNumbers[i] <= minxArrayNumbers[j]) {
            int minus=abs(j-i);
            cout<<"Subtract "<<minus<<endl;

            ans = max(ans,minus);
            // cout<<"Printing the answer "<<ans<<endl;
            j++;
            // cout<<"The value of the j "<<j<<endl;

        } else {
            cout<<"The value of the i "<<i<<endl;
            
            i++;
        }
        cout<<"Printing the array "<<maxArrayNumbers[i]<<" --> mini "<<minxArrayNumbers[j]<<"ans "<<ans<<endl;
        cin.get();
    }
    return ans;
}

int main() {
    int a[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(a)/sizeof(a[0]);
    cout << maxIndexDiff(a, n) << endl;
    return 0;
}
