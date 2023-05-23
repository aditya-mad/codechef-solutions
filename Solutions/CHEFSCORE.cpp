#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    int problems, marks, target;

    for (; test--;)
    {
        cin >> problems >> marks >> target;

        if (target % marks == 0)
        {
            if ((target / marks) <= problems)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}