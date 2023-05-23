#include <iostream>
using namespace std;

int main()
{
    int test;

    int num1, num2, num3;

    cin >> test;

    for (; test--;)
    {
        cin >> num1 >> num2 >> num3;

        cout << max(max(num1, num2), num3) - min(min(num1, num2), num3) << endl;
    }

    return 0;
}