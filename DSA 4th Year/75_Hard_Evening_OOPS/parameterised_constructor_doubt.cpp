#include <bits/stdc++.h>
using namespace std;
class FourthFourHard
{
    public:
    int case1;

    FourthFourHard(int c)
    {
        this->case1 = c;
    }
    FourthFourHard(FourthFourHard &obj)
    {
        this->case1 = obj.case1;
    }
};
int main()
{
    FourthFourHard a(13);
    FourthFourHard b = a;
    
    cout << a.case1 << endl;
    cout << b.case1 << endl;

    return 0;
}