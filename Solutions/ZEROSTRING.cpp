#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        long long int len, zero = 0, one = 0;
        string bin;

        cin >> len >> bin;
        for (auto x : bin)
        {
            if (x == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if (zero == 0)
        {
            cout << 1 << endl;
        }
        else if (one == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (one == zero)
            {
                cout << one << endl;
            }
            else if (one > zero)
            {
                cout << 1 + zero << endl;
            }
            else
            {
                cout << one << endl;
            }
        }
    }
    return 0;
}