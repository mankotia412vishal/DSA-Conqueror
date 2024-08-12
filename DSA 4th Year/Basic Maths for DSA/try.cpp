// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     int n=10;
//     for (int  i = 2; i <= sqrt(10); i++)
//     {
//         if(n%i==0){
//             cout<<"Hii";
//         }
//     }
    
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

int minabsolute(string s1, string s2,int ans) {
      ans=0;
    for (int i = 0; i < s1.length(); i++) {
        int diff = abs(s1[i] - s2[i]);
        ans += min(diff, 26 - diff); // Choose minimum of current and opposite direction
    }
    return ans;
}

int main() {
    int n = 6;
    vector<string> s = {"abb", "zba", "bef", "cdu", "ooo", "zzz"};
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = min(ans, minabsolute(s[i], s[j],ans));
        }
    }
    cout << ans << endl;
    return 0;
}


int main2() {
    int N = 3;
    vector<int> p = {-1, 0, 0};
    vector<long long> result = calcPairs(N, p);

    for (long long numPairs : result) {
        cout << numPairs << " ";
    }

    return 0;
}



