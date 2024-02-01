#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int eps, odd, even;
        cin >> eps >> even >> odd;
        if (eps % 2 == 0)
        {
            cout << ((eps / 2) * even) + ((eps / 2) * odd) << endl;
        }
        else
        {
            cout << ((eps / 2) * even) + ((eps - (eps / 2)) * odd) << endl;
        }
    }
    return 0;
}