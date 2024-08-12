#include <bits/stdc++.h>
using namespace std;
// int countSymmetricIntegers(int low, int high)
// {
// }
int countNo(int n)
{
    int c = 0;
    while (n > 0)
    {
        int d = n % 10;
        c++;
        n = n / 10;
    }
    return c;
}
int main()
{
    // int low = 1, high = 100;
    int ans=0;
    int low = 1200, high = 1230;

    for (int i = low; i <= high; i++)
    {
        int temp = i;
        int count = countNo(temp);
       
       if(count>=2){
        int half=count/2;
        int firstsum=0;
        int y=0;
        while (y<half)
        {
            int d=temp%10;
            firstsum+=d;
            temp=temp/10;
            y++;
        }
        int secondsum=0;
        while(y<count){
            int d=temp%10;
            secondsum+=d;
            temp=temp/10;
            y++;
        }
        if(firstsum==secondsum){
            ans++;
            // cout<<i<<" ";
        }
        else{
            continue;
        }
        
       }
    }
cout<<ans;
    return 0;
}