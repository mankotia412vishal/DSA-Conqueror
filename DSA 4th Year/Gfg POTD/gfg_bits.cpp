#include <iostream>
#include <cmath>

using namespace std;

int soldiersBetweenAbrahamAndDaryl(int num)
{
    if (num == 3 || num == 4)
    {
    }
    else
    {

        if (num == 1)
        {
            return 0; // Edge case: Only one soldier, no one between Abraham and Daryl
        }

        // Find the largest even number less than or equal to num
        int n = (num % 2 == 0) ? num : num - 1;

        // Calculate the number of soldiers between Abraham and Daryl
        return n - 1;
    }
}

int main()
{
    int input;

    cout << "Enter the number of soldiers: ";
    cin >> input;

    int result = soldiersBetweenAbrahamAndDaryl(input);

    cout << "Number of soldiers between Abraham and Daryl: " << result << endl;

    return 0;
}
