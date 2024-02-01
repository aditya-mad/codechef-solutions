#include <iostream>
using namespace std;

int main()
{
    long long int test, num1, num2;
    cin >> test;
    while (test--)
    {
        cin >> num1 >> num2;

        if (num2 % num1 != 0)
        {
            if (num2 > 2 * num1)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}