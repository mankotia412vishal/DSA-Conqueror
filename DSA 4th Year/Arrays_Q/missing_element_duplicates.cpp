#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int a[] = {13, 33, 43, 16 ,25, 19, 23 ,31, 29 ,35 ,10, 2, 32, 11, 47, 15, 34 ,46, 30 ,26, 41, 18, 5, 17, 37 ,39, 6 ,4 ,20 ,27 ,9, 3 ,8, 40 ,24 ,44, 14 ,36, 7, 38 ,12 ,1 ,42 ,12 ,28 ,22 ,45};
    n = sizeof(a) / sizeof(int);
    //  sort(a,a+n);

    for (int i = 0; i < n; i++)
    {

        int index = abs(a[i]);
         
        if (a[index-1] > 0)
        {

            a[index-1] *= -1;
            
        }
        
       
    }
     cout<<"\n";
    for (int i:a)
    {
         cout <<i << " ";
    }
    cout<<"\n";
    for (int  i = 0; i < n; i++)
    {
        if(a[i]>0){
            cout<<i+1<<"---> "<<a[i-1];
        }
    }
    

    return 0;
}