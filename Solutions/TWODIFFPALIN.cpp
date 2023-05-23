#include <iostream>
using namespace std;

int main()
{
    unsigned long long int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        unsigned long long int string_lenght_1, string_lenght_2;

        cin >> string_lenght_1 >> string_lenght_2;

        if (string_lenght_1 == 1 || string_lenght_2 == 1)
        {
            cout << "No" << endl;
        }
        else if (string_lenght_2 % 2 == 1 && string_lenght_1 % 2 == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}