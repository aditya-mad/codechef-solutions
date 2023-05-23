#include <iostream>
using namespace std;

int main()
{
    long long int num, test;

    cin >> test;

    for (; test--;)
    {
        cin >> num;
        long long int sum = (num * (num + 1)) / 2;
        if (sum % 2 == 0)
        {
            cout << num << endl;
        }
        else
        {
            cout << num - 1 << endl;
        }
    }

    return 0;
}