#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size;
        cin >> size;
        long long int num1[size], num2[size];
        bool a1 = true;

        for (long long int i = 0; i < size; i++)
        {
            cin >> num1[i];
            if (num1[i] == 1)
            {
                a1 = false;
            }
        }

        for (long long int i = 0; i < size; i++)
        {
            cin >> num2[i];
        }

        if (num1[0] != num2[0] || num1[size - 1] != num2[size - 1])
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            bool flag = true;
            for (long long int i = 1; i <= size - 2; i++)
            {
                if (num1[i] == 1 && num2[i] == 0)
                {
                    flag = false;
                    cout << "NO" << endl;
                    break;
                }
                else if (num1[i] != num2[i] && a1)
                {
                    flag = false;
                    cout << "NO" << endl;
                    break;
                }
            }

            if (flag)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}