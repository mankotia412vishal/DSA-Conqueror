#include <bits/stdc++.h>
using namespace std;
void Add()
{
    cout << "Enter two nos\n";
    int a, b;
    cin >> a >> b;
    cout << "Result of the both 2 numbers is " << a + b << endl;
}

void CircleCircumference(int r)
{
    float pi = 3.14;
    cout << "Result is " << pi * r * 2 << endl;
}

void Grade()
{
    int a;
    cout << "Enter a no";
    cin >> a;
    if (a >= 90)
    {
        cout << "A grade\n";
    }
    else if (a >= 80)
    {
        cout << "B Grade\n";
    }
    else if (a <= 33)
    {
        cout << "Failllll";
    }
    else
    {
        cout << "Average Passs\n";
    }
}
void CheckNo()
{
    int a;
    cout << "Enter a number\n";
    cin >> a;
    if (a > 0)
    {
        cout << "No is +ve\n";
    }
    else if (a == 0)
    {
        cout << "No is \n0";
    }
    else
    {
        cout << "-ve ho yaar\n";
    }
}
void Counting(int n)
{
    int i = 1;
    while (i <= n)
    {
        cout << i++ << endl;
    }
}
void user()
{
    int n, sum = 0;
    cout << "Kitne no \n";
    cin >> n;
    int t = n;
    while (t != 0)
    {
        cout << "Enter no ";
        int a;
        cin >> a;
        sum += a;
        t--;
    }
    cout << "Result is " << sum << endl;
}

void Odd()
{
    cout << "Enter kitne odd no chayie\n";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            cout << i << " ";
        }
    }
}
void counting()
{
    int a;
    cin >> a;
    while (a != 0)
    {
        cout << a-- << endl;
    }
}
void Factorial()
{
    int a, i = 1, fact = 1;

    cin >> a;
    while (i <= a)
    {
        fact *= i++;
    }
    cout << "Factorial of the Number " << fact << endl;
}
void Prime()
{
    int n;
    cin >> n;
    bool isprime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime ";
            isprime = false;
            break;
        }
    }
    if (isprime)
    {
        cout << "Prime\n";
    }
}
void Valid()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1 + s2 <= s3)
    {
        cout << "invlaid\n";
    }
    else if (s2 + s3 <= s1)
    {
        cout << "invlaid\n";
    }

    else if (s1 + s3 <= s2)
    {
        cout << "invlaid\n";
    }
    else
    {
        cout << "valid\n";
    }
}

void Even()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}
void Maximum()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "A is Maxi\n";
    }
    else if (b > a && b > c)
    {
        cout << "B is Maxi\n";
    }
    else
    {
        cout << "C is Maxi\n";
    }
}
void CI1()
{
    float p, r, t;
    cin >> p >> r >> t;
    float ans = p * (pow(1 + r / 100, t));

    cout << ans - p << endl;
}
void CI()
{
    float p, r, t;
    cin >> p >> r >> t;
    float ans = p * (pow(1 + r / 200, 2 * t));

    cout << ans - p << endl;
}
void Armstrong()
{
    int a = 153, ans = 0;
    int n = a;

    while (a != 0)
    {
        int ld = a % 10;
        ans += pow(ld, 3);

        a = a / 10;
    }
    if (n == ans)
    {
        cout << "No is Arrrrrrrrrmstrong\n";
    }
    else
    {
        "Not a Armstrong no\n";
    }
}
void Arm2()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        int ans = 0, t = i;

        while (t != 0)
        {
            int ld = t % 10;
            ans += pow(ld, 3);
            t = t / 10;
        }
        if (i == ans)
        {
            cout << ans << endl;
        }
    }
}
void Celcius()
{
    float t;
    cin >> t;
    float ans = t * 9 / 5 + 32;
    cout << ans << endl;
}
void Fahrenheit()
{
    float t;
    cin >> t;
    int ans = t - 32 + 5 / 9;
    cout << ans << endl;
}
void LeapYear(){
    int t;
    cin>>t;
    for (int  i = 1900; i <= t; i++)
    {
     if(i%4==0 && i%100!=0){
        cout<<i<<" ";
    }
    }
    
  
}
int main()
{
    while (1)
    {
        cout << "1. Add 2 numbers by taking input from the Users \n";
        cout << "2. Calculate Circumference of Circle\n";
        cout << "3. Average of 3 Numbers \n";
        cout << "4. Check Even or Odd\n";
        cout << "5. Student Grade System\n";
        cout << "6. Check a Number is +ve -ve or 0\n";
        cout << "7. Print Counting from 1 to 10\n";
        cout << "8. Add N no from the user\n";
        cout << "9. Printing 1 to N but only Odd\n";
        cout << "10. Multiply 2 Nos \n";
        cout << "11. Perimeter of the triangle\n";
        cout << "12. Find Simple Interest \n";
        cout << "13. Print Counting from N to 1 \n ";
        cout << "14. Factorial of the Number \n ";
        cout << "15. Prime  Number \n ";
        cout << "16. Valid Traingle \n ";
        cout << "17. Printing 1 to N Even nos only \n ";
        cout << "18. Maximum of 3 numbers \n ";
        cout << "19. C I \n ";
        cout << "20. C I Halfyearly \n ";
        cout << "21. Armstrong Number \n ";
        cout << "22. Print Armstrong Number between 2 intervals \n ";
        cout << "23. Temp in celcius \n ";
        cout << "24. Temp in fahrenheit \n ";
        cout << "25. Leap Year \n ";

        cout << "Enter your  Choice\n";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            Add();
            break;
        case 2:
            int r;
            cout << "Enter the radius of the circle\n";
            cin >> r;
            CircleCircumference(r);
            break;

        case 3:
            int a, b, c;
            cout << "Enter 3 nos for average\n";
            cin >> a >> b >> c;
            cout << "Result is " << (a + b + c) / 3 << endl;
            break;
        case 4:
            int a1;
            cout << "Enter a Number\n";
            cin >> a1;
            if (a1 & 1)
            {
                cout << "Odd\n";
            }
            else
            {
                cout << "Even\n";
            }

            break;
        case 5:
            Grade();
            break;
        case 6:
            CheckNo();
            break;
        case 7:
            int n;
            cout << "Kha tak counting Chayie\n";
            cin >> n;
            Counting(n);
            break;
        case 8:
            user();
            break;
        case 9:
            Odd();
            break;
        case 10:
            int a2, a3;
            cin >> a2 >> a3;

            cout << "Resukt iss " << a2 * a3 << endl;
            break;
        case 11:
            int n1, n2, n3;
            cin >> n1 >> n2 >> n3;
            cout << "Result is " << n1 + n2 + n3 << endl;
            break;
        case 12:
            int p, r1, t;
            cin >> p >> r1 >> t;
            cout << "Result is " << (p * r1 * t) / 100 << endl;
            break;
        case 13:
            counting();
            break;
        case 14:
            Factorial();
            break;
        case 15:
            Prime();
            break;
        case 16:
            Valid();
            break;
        case 17:
            Even();
            break;
        case 18:
            Maximum();
            break;
        case 19:
            CI1();
            break;
        case 20:
            CI();
            break;
        case 21:
            Armstrong();
            break;
        case 22:
            Arm2();
            break;
        case 23:
            Celcius();
            break;
        case 24:
            Fahrenheit();
            break;
        case 25:
            LeapYear();
            break;

        default:
            cout << "Unknown Choice\n";
            break;
        }
    }
}