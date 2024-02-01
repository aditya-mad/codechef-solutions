#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    while (test--)
    {
        long long int size, oper;
        cin >> size >> oper;
        string bin;
        cin >> bin;

        for (long long int i = 0; i < size; i++)
        {
            if (i == 0 && bin[i] == '0')
            {
                cout << '1';
                oper--;
            }
            else
            {
                cout << bin[i];
            }
        }

        for (long long int i = 0; i < oper; i++)
        {
            cout << '0';
        }
        cout << endl;
    }
    return 0;
}