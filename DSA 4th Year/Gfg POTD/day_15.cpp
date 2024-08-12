// #include <bits/stdc++.h>
// using namespace std;
// void subsequences(string str, string str2, int i, int j, int length, string ans, string ans2)
// {
//     if (i >= str.length())
//     {
//         cout << ans<<" \n--> \n"  << endl;
//         return;
//     }
//     cout<<endl;
//     if (j >= str.length())
//     {
//         cout << ans2<<"\n --> \n" << endl;
//         return;
//     }

//     // exclude
//     subsequences(str, str2, i + 1, j + 1, length, ans, ans2);

//     // include
//     ans += str[i];
//     ans += str2[j];
//     subsequences(str, str2, i + 1, j + 1, length, ans, ans2);
// }
// int main()
// {

//     string str = "abc";
//     string str2 = "cba";
//     int length = str.length();
//     string ans = "";
//     string ans2 = "";
//     subsequences(str, str2, 0, 0, length, ans, ans2);
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;


void secondHighest(int arr[], int size){

    map<int,int>mp;

    for(int i = 0 ; i < size ; i++){
        mp[arr[i]]++;
    }


    for(int i =0 ; i < size ; i++){
        cout << mp[i];
    }

    for(auto i:mp){
        cout<<i.first<<"---> "<<i.second<<endl;
    }




}



int main(){

    int arr[] = {4,9,2,1,5};
    int size = sizeof(arr)/sizeof(int);
    secondHighest(arr,size);


    
    return 0;

}