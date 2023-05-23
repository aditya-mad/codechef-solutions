#include <iostream>
using namespace std;

int main()
{
    int test;
    unsigned long long int size, input, even, odd;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> size;

        even = 0;
        odd = 0;

        for (int j = 0; j < size; j++)
        {
            cin >> input;

            if (input % 2 == 0)
            {
                even++;
            }
            else if (input % 2 == 1)
            {
                odd++;
            }
        }

        if (even == 0 || odd == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << even << endl;
        }
    }
    return 0;
}