#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (; test--;)
    {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;

        if ((num1 * num2) % num3 == 0)
        {
            cout << num1 * num2 << " " << num3 << endl;
        }
        else if ((num3 * num2) % num1 == 0)
        {
            cout << num3 * num2 << " " << num1 << endl;
        }
        else if ((num1 * num3) % num2 == 0)
        {
            cout << num1 * num3 << " " << num2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
