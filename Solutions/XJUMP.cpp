#include <iostream>
using namespace std;

int main()
{

    int test;

    cin >> test;

    int target, steps;

    for (; test--;)
    {
        cin >> target >> steps;

        cout << (target / steps) + (target - (steps * (target / steps))) << endl;
    }

    return 0;
}