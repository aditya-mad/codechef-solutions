#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size, num, even = 0, odd = 0;
        cin >> size >> num;
        long long int nums[size];
        for (long long int i = 0; i < size; i++)
        {
            cin >> nums[i];
            if (nums[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd == size || even == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (num % 2 == 0)
        {
            if (odd == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << even << endl;
            }
        }
        else
        {
            if (even % 2 == 0)
            {
                cout << even / 2 << endl;
            }
            else
            {
                cout << (even / 2) + 1 << endl;
            }
        }
    }

    return 0;
}