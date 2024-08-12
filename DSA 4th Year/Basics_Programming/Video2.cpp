#include <bits/stdc++.h>
using namespace std;
void Add()
{
  int a, b;
  cin >> a >> b;
  cout << "Result is " << a + b << endl;
}
void maxi()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a > c)
  {
    cout << "Maximum is A\n";
  }
  else if (b > a && b > c)
  {
    cout << "B is Maximum\n";
  }
  else
  {
    cout << "C is maxi\n";
  }
}
void Even()
{
  int n, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum += i;
    }
  }
  cout << "Sum is " << sum << endl;
}

void Area()
{
  float pi = 3.14, r;
  cin >> r;
  cout << "Area of the Circle is " << pi * r * r << endl;
}
void Odd()
{
  int n;
  cin >> n;
  cout<<(n % 2 == 0) ? "Even \n" : "Odd\n";
  cout<<"\n";
}
void fact(){
  int n,fact=1;
  cin>>n;
  for (int  i = 2; i <= n; i++)
  {
   fact*=i;
  }
  cout<<"Factorial "<<fact<<endl;
}
void prime(){
  int n;
  cin>>n;
  bool isprime=true;
  for (int  i = 2; i < n; i++)
  {
    if(n%2==0){
      isprime=false;
      break;
    }
  }
  if(isprime){
    cout<<"No is Prime\n";
  }
}
void prime1(){
  int n;
  cin>>n;
  bool isprime=true;
  for (int  i = 2; i <= n; i++)
  {
    bool p=true;
    for (int  j = 2;j <i; j++)
    {
      if(i%j==0){
        p=false;
        break;
      }
    }
    
    if(p){
      cout<<i<<" ";
     
    }
  }
   
}
void digits(){
  int n;
  cin>>n;
  while (n!=0)
  {
   int ld=n%10;
   cout<<"No "<<ld<<endl;
   n=n/10;
  }
  
}
int main()
{

  while (true)
  {
    cout << "1. Add 2 Numbers\n";
    cout << "2. Maximum of 2 numbers\n";
    cout << "3. Sum of Even numbers till n\n";
    cout << "4. Area oof Circle  \n";
    cout << "5. Check whther a no is odd/even\n";
    cout << "6. Factorial of a number\n";
    cout << "7. Prime or not\n";
    cout << "8. Prime 1 to n\n";
    cout << "9. Print all the digits of a number\n";

    cout << "Enter your Choice\n";

    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'a':
      Add();
      break;
    case 'b':
      maxi();
      break;
    case 'c':
      Even();
      break;
    case 'd':
      Area();
      break;
    case 'e':
      Odd();
      break;
    case 'f':
      fact();
      break;
    case 'g':
      prime();
      break;
    case 'h':
      prime1();
      break;
    case 'i':
      digits();
      break;

      

    default:
      cout << "invalid Number\n";
      break;
    }
  }

  return 0;
}