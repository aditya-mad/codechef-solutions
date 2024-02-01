#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int num;
        cin >> num;

        int bit = 31 - __builtin_clz(num);

        if (num < 2)
            cout << 1 << endl;
        else
            cout << max(num - (1 << bit) + 1, ((1 << bit) - 1) - (1 << (bit - 1)) + 1) << endl;
    }
    return 0;
}
