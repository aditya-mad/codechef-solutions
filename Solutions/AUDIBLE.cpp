#include <iostream>
using namespace std;

int main()
{
    long long int test, range;

    cin >> test;

    while (test--)
    {
        cin >> range;

        if (range >= 67 && range <= 45000)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}